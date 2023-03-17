#include <stdio.h>

int main(void){
    float nota1, nota2, nota3, nota_final;

printf("Insira a nota 1: ");
scanf("%f", &nota1);
printf("Insira a nota 2: ");
scanf("%f", &nota2);
printf("Insira a nota 3: ");
scanf("%f", &nota3);

nota_final = (nota1 + nota2 + nota3) / 3;

printf("sua nota final foi: %f", nota_final);


return 0;

    
}