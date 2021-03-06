#include <termio.h>
#include <chrono>
#include <thread>
#include "HmiEvent.h"
#include "HmiMain.h"
#include "GDC_Sim.h"
#include "Simulator.h"
#include "HMIControl.h"

void hmiMain(HmiMain* p_hmi)
{
    std::cout << "HMI main thread is started!\n";
    p_hmi->start();
}

void KeyboardScan(HmiMain* p_hmi)
{
    unsigned int timer = 0;

    while(true)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        timer++;
#if 0
        struct termios new_settings;
        struct termios stored_settings;

        // tty访问设置
        tcgetattr(0, &stored_settings);
        new_settings = stored_settings;
        new_settings.c_lflag &= (~ICANON);
        new_settings.c_cc[VTIME] = 0;
        tcgetattr(0, &stored_settings);
        new_settings.c_cc[VMIN] = 1;
        tcsetattr(0, TCSANOW, &new_settings);

        int input = getchar();

        tcsetattr(0, TCSANOW, &stored_settings);

        if(input != EOF)
        {
            HmiEvent ev(HMI_EV_TOUCH, (unsigned long)input);
            p_hmi->setReady(true);
            p_hmi->addEventQueue(ev);
        }
#endif
        if(timer == 1)
        {
            timer = 0;
            HmiEvent ev(HMI_EV_CYCLIC, (unsigned long)0);
            p_hmi->setReady(true);
            p_hmi->addEventQueue(ev);
        }
    }
}

static HMIControl hmi_control;

int main(int argc, char* argv[])
{
    // int sig = analyzeOptions( argc, argv );
    int sig = 1;
    Options opts( "Simulator.ini" );
    if( opts.logFileName != "" )
    {
        freopen( opts.logFileName.c_str(), "w", stdout );
        freopen( opts.logFileName.c_str(), "w", stderr );
    }

    static Simulator sim;

    switch(sig)
    {
        case 1:
        {
            // Simulator mode
            sim.initBmp();
            setSim(&sim);
            static HmiMain *p_hmi = new HmiMain();
            hmi_control.setHMI(p_hmi); 
            std::thread hmi_main(hmiMain, p_hmi);
            std::thread kb_scan(KeyboardScan, p_hmi);
            sim.gtkmain(argc, argv);
            hmi_main.join();
            kb_scan.join();
        }
        break;
        case 2:
        {}
        break;
    }

    return 0;
}
