//
// Created by phil on 29.03.20.
//

#ifndef PIGPIOSTUB_H
#define PIGPIOSTUB_H

#define PI_OUTPUT 1
#define PI_INITIALISED 0
int gpioInitialise(){
    return PI_INITIALISED;
}
void gpioSetMode(int pin,int sig)
{

}


void gpioWrite(int pin,int sig)
{

}
void gpioPWM(int pin,float sig)
{

}
int gpioRead(int pin)
{
    return 0;
}

void gpioTerminate()
{

}

float gpioGetPWMdutycycle(int pin)
{
    return 0.0f;
}
#endif //PIGPIOSTUB_H
