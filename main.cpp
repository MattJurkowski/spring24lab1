#include "mbed.h"
#include <cstudio>

InterruptIn buttn(PC_13)

void buttn_fall(){
    printf("button pressed!!\r\n")
}

//main() runs in its own thread in the OS
int main()
{
    printf("This is Mbed os V%d \r\n", MBED_VERSION)

    button.fall(&buttn_fall);
    while (true) {
    }
}

