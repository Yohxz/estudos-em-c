#include <stdio.h>

int main(){
    
    float a, b, soma, sub, div, mul, result;

     printf("digite o valor de a: ");
     scanf("%f", &a);
     printf("digite o valor de b: ");
     scanf("%f", &b);

     soma =(a + b);
     sub = (a - b);
     div = (a / b);
     mul = (a * b);

     printf("\nA soma e: %f", soma);
     printf("\na subtracao e: %f", sub);
     printf("\na divisao e: %f", div);
     printf("\no produto e: %f", mul);


  
  return 0;

}