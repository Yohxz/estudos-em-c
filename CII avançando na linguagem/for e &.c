#include <stdio.h>
#include <math.h>


void par(int *numero){

    if((*numero) % 2 == 0){
        printf("esse número é par!");
}
    else{
        printf("Esse número é ímpar!");
        }
    }

int main(){

    int numero;

    printf("Insira seu número: ");
    scanf("%d", &numero);
    par(&numero);
}
