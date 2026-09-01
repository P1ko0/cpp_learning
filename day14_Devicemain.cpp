#include "day14_Device.h"
#include "day14_Logger.h"
#include "day14_Simulator.h"

int main()
{
    Device d1;

    d1.start();

    Logger::write("Device started");

    Simulator s1;
    s1.run();

    d1.stop();
    Logger::write("Device stopped");

    return 0;
}