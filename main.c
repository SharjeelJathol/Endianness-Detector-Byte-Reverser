#include "stdio.h"

void bytes_reverser(char* first_byte, size_t total_bytes){
    char temp;
    for(size_t i=0; i<total_bytes/2; i++){
        temp = first_byte[i];
        first_byte[i] = first_byte[total_bytes - i -1];
        first_byte[total_bytes - i - 1] = temp;
    }
    return;
}

int main(){
    int value = 0x78563412;     // Pretending a Big Endian System
    char *bytes = (char *)&value;

    if(bytes[0] == 0x78)
        printf("Little Endian System\n");
    else{
        printf("Big Endian System\n");
        // Before Reversal
        printf("0x%08X\n", value);

        bytes_reverser(bytes, sizeof(value));

        // After Reversal
        printf("0x%08X\n", value);

    }

        return 0;
}