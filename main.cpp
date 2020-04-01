#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2);


int main()

{

    uLCD.printf("\n106000130\n"); //Default Green on black text
    uLCD.filled_rectangle(50, 50, 100, 100, 0x00FF00);
    wait(30);

}