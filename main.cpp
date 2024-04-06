#include "mbed.h"
#include <cstdio>

InterruptIn buttn(PC_13)

void button_fall(){
    printf("button pressed!!!\r\n");
}

//main() runs in its own thread in the OS
int main()
{
    printf("This is Mbed os V%d \r\n", MBED_VERSION);

    buttn.fall(&buttn_fall);
    while (true) {
    }
       
}

