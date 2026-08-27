There are 2 endian systems
Little Endian
    Stores least significant byte first
Big Endian
    Stores most significant bytes first

Run without make:

    valgrind --leak-check=full --show-leak-kinds=all -s ./main

Run with make:
    mkdir build && cd build
    cmake ..
    make
    ./endianness_c
    ./endianness_cpp
    valgrind --leak-check=full --show-leak-kinds=all -s ./endianness_c
    valgrind --leak-check=full --show-leak-kinds=all -s ./endianness_cpp

