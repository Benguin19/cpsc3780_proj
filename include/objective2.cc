#include <iostream>

int clear255(int a);
int shift_val(int val);

int main() {
    int v1 = 173;
    int v2 = 3;
    int c = clear255(v1);
    int d = shift_val(v2);
    int final = c | d;
    std::cout << "0x"<< std::hex << final << std::endl;
    int v3 = 2;
    int e = shift_val(v3);
    int f = clear255(final);
    int final_final = e | f;
    std::cout << "0x"<< std::hex << final_final << std::endl;
    return 0;
}

int clear255(int a) {
    int c;
    int b = 0x3f; //the decimal equivalent of 00111111 or 0x3f
    c = a & b;
    return c;
}

int shift_val(int val) {
    if (val < 4 && val >= 0) {
        return val << 6;
    } else {
        return 3 << 6;
    }
}