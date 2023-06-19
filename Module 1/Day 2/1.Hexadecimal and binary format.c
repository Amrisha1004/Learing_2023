#include <stdio.h>
void printExponent(double num);
int main() 
{
    double x = 0.7;
    printf("Input: %f\n", x);
    printExponent(x);

    return 0;
}

void printExponent(double num) 
{
    unsigned long long *ptr = (unsigned long long *)&num;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    printf("Exponent in hexadecimal: 0x%llX\n", exponent);
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    printf("\n");
}