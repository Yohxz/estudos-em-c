#include <stdio.h>

int main(){
    
    float a, b, c, delta;

    printf("insira o valor de a: ");
    scanf("%f", &a);
    printf("insira o valor de b: ");
    scanf("%f", &b);
    printf("insira o valor de c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    printf("\nO valor de delta e: %f", delta);


 return 0;

}