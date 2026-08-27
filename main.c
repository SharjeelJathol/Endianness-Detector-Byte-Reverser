#include "stdio.h"

int main(){
    int value = 0x12345601;
    
    char *bytes = (char *)&value;

    if(bytes[0] == 1)
        printf("Little Endian System\n");
    else
        printf("Big Endian System\n");

        return 0;
}