#include <iostream>

#include <stdio.h>
#include "robopi_drivers/robopi_drivers.h"
#include <thread>

constexpr int enA = 21;
constexpr int enB = 13;
constexpr int in1 = 20;
constexpr int in2 = 16;
constexpr int in3 = 26;
constexpr int in4 = 19;

#include <chrono>
using namespace robopi;
int main(int argc, char *argv[])
{
    MotorLn298 left(in1,in2,enA);
    MotorLn298 right(in4,in3,enB);

    auto start = std::chrono::system_clock::now();

    for(int i = 0; i < 60; i++)
    {
        left.set((float)i/60.0f*MAX_VEL_DF_DC);
        right.set(-1.0f * (float)i/60.0f*MAX_VEL_DF_DC);
	std::this_thread::sleep_for (std::chrono::milliseconds(500));
    }
    for(int i = 60; i > 0; i--)
    {
        left.set((float)i/60.0f*MAX_VEL_DF_DC);
        right.set((float)-i/60.0f*MAX_VEL_DF_DC);
	std::this_thread::sleep_for (std::chrono::milliseconds(500));
    }
    left.stop();
    right.stop();


    return 0;
}
