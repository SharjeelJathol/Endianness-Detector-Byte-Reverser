#include <iostream>
#include <cstring>

union EndianCheck {
    int value;
    char bytes[4];
};

int main(){
    int value = 1;
    char byte;
    memcpy(&byte, &value, 1);

    EndianCheck endian;
    endian.value = 1;
    std::cout << static_cast<int>(endian.bytes[0]) << "\n";

    if(byte == 1)
        std::cout << "Little Endian System\n";
    else
        std::cout << "Big Endian System\n";

    return 0;
}