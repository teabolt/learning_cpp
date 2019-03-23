#include <iostream>
using namespace std;

int main() {
    // BCIFDVW - 7 basic types (keywords)
    std::cout << "bool " << sizeof(bool) << endl; // can still indicate "std" namespace explicitly
    std::cout << "char " << sizeof(char) << endl;
    std::cout << "int " << sizeof(int) << endl;
    std::cout << "float " << sizeof(float) << endl;
    std::cout << "double " << sizeof(double) << endl;
    std::cout << "void " << sizeof(void) << endl; // this gives a warning
    std::cout << "wide char " << sizeof(wchar_t) << endl;

    /* type modifiers (can combine):
        signed - negative numbers supported / unsigned - no negative numbers (char, int)
        short - halves (int) / long - doubles(int, double)
    */
    std::cout << "long double " << sizeof(long double) << endl;
    // std::cout << "signed float" << sizeof(signed float) << endl; // not allowed

    unsigned int x = -10; // this will overflow to positives
    signed int y = -10; // this works
    cout << x << endl;
    cout << y << endl;
    return 0;
}
