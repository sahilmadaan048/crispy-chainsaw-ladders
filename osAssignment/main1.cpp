#include <iostream>
#include <cstdlib>

int main() {
    #ifdef _WIN32
        system("cls");  
    #else
        system("clear");
    #endif

    std::cout << "Hello from cross-platform test!" << std::endl;
    return 0;
}

