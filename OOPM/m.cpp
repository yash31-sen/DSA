#include <iostream>

int main() {
    int* intPtr;
    char* charPtr;
    double* doublePtr;
    void* voidPtr;

    std::cout << "Size of int pointer: " << sizeof(intPtr) << " bytes" << std::endl;
    std::cout << "Size of char pointer: " << sizeof(charPtr) << " bytes" << std::endl;
    std::cout << "Size of double pointer: " << sizeof(doublePtr) << " bytes" << std::endl;
    std::cout << "Size of void pointer: " << sizeof(voidPtr) << " bytes" << std::endl;

    return 0;
}
