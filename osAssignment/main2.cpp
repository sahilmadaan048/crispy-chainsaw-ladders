#include <iostream>
#include <cstdlib>

int main() {
    // Forcefully use Windows command, which won't work on Ubuntu
    system("cls");   // only works on Windows

    std::cout << "Hello from Windows-only code!" << std::endl;
    return 0;
}

