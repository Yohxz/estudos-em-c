#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
    setlocale(LC_ALL, "portuguese");

    int  a, b, aux, i, n;

    a = 0;
    b = 1;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    printf("\nSérie de fibonacci:\n\n");
    printf("%d\n", b);


    for(i = 0; i < n; i++){

        aux = a + b;
        a = b;
        b = aux;

        printf("%d\n", aux);
    }
 return 0;   
}