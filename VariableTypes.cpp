// Basic Variable Type Breakdown

#include <iostream>

int main() {
    char example_char = 'x';
    short int unsigned example_short = 65535;
    int example_int_a = 12;
    int example_int_b = 18;
    bool example_bool = true;
    int example_int_c = example_int_a + example_int_b;

    std::cout << example_int_c << std::endl;
    std::cout << example_char << ' ' << example_bool << ' ' << example_short << std::endl;

    return 0;
}