#include <stdio.h>
#include <stdlib.h>

typedef struct ComplexNumber
{
    float real;
    float imaginary;
} Complex;

// Function to add two complex numbers and print the result
void add(Complex n1, Complex n2)
{
    Complex result;
    result.real      = n1.real      + n2.real;
    result.imaginary = n1.imaginary + n2.imaginary;

    printf("%.1f + %.1fi\n", n1.real, n1.imaginary);
    printf("%.1f + %.1fi\n", n2.real, n2.imaginary);
    printf("Sum = %.1f + %.1fi", result.real, result.imaginary);
}

int main()
{
    Complex k1, k2;

    // Get first complex number
    printf("Enter real and imaginary parts of the first number:\n");
    scanf("%f%f", &k1.real, &k1.imaginary);

    // Get second complex number
    printf("Enter real and imaginary parts of the second number:\n");
    scanf("%f%f", &k2.real, &k2.imaginary);

    add(k1, k2);

    return 0;
}
