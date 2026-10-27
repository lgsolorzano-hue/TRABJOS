#include <iostream>

int main() {
    const char* verde = "\033[32m";
    const char* normal = "\033[0m";

    std::cout << "       .-^^^^-.\n";
    std::cout << "      /_______\\\n";
    std::cout << "       (o  o)       ¡Hola! Soy Leandro.\n";
    std::cout << "        \\__/        ¡Bienvenido a mi mundo del deporte!\n";
    std::cout << verde;
    std::cout << "       /|PAFDE|\\\n";
    std::cout << "      / |_____| \\\n";
    std::cout << normal;
    std::cout << "        /   \\\n";
    std::cout << "       /_____\\\n";

    return 0;
}
