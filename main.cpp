#include <iostream>
#include <cstring>
#include <iomanip>

union EndianCheck {
    int value;
    char bytes[4];
};

void bytes_reverser(char* first_byte, size_t total_bytes){
    char temp;
    for(int i=0; i<total_bytes/2; i++){
        temp = first_byte[i];
        first_byte[i] = first_byte[total_bytes - i -1];
        first_byte[total_bytes - i - 1] = temp;
    }
    return;
}

int main(){
    int value = 0x78563412;     // Pretending a Big Endian System
    char byte;
    memcpy(&byte, &value, 1);

    EndianCheck endian;
    endian.value = value;

    if(byte == 0x78 && endian.bytes[0] == 0x78)
        std::cout << "Little Endian System\n";
    else{
        std::cout << "Big Endian System\n";

        // Before Reversal
        std::cout << std::hex
              << "0x" 
              << std::uppercase 
              << std::setw(8) 
              << std::setfill('0') 
              << value << std::endl
              << std::dec << std::nouppercase;

        bytes_reverser((char*)&value, sizeof(value));

        // After Reversal
        std::cout << std::hex
              << "0x" 
              << std::uppercase 
              << std::setw(8) 
              << std::setfill('0') 
              << value << std::endl
              << std::dec << std::nouppercase; 
    }

    return 0;
}