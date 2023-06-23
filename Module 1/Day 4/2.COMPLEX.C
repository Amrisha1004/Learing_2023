#include <stdio.h>

struct Complex {
    double real;
    double imag;
};

void readComplex(struct Complex *complex) {
    printf("Enter the real part: ");
    scanf("%lf", &(complex->real));
    
    printf("Enter the imaginary part: ");
    scanf("%lf", &(complex->imag));
}

void writeComplex(struct Complex complex) {
    if (complex.imag >= 0)
        printf("%.2lf + %.2lfi\n", complex.real, complex.imag);
    else
        printf("%.2lf - %.2lfi\n", complex.real, -complex.imag);
}

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    
    return result;
}

struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    
    return result;
}

int main() {
    struct Complex complex1, complex2, sum, product;
    
    printf("Enter the first complex number:\n");
    readComplex(&complex1);
    
    printf("Enter the second complex number:\n");
    readComplex(&complex2);
    
    printf("\nEntered complex numbers:\n");
    printf("First complex number: ");
    writeComplex(complex1);
    printf("Second complex number: ");
    writeComplex(complex2);
    
    sum = addComplex(complex1, complex2);
    product = multiplyComplex(complex1, complex2);
    
    printf("\nResult of addition: ");
    writeComplex(sum);
    
    printf("Result of multiplication: ");
    writeComplex(product);
    
    return 0;
}
