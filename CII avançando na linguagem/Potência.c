#include <stdio.h>
#include <math.h>

void potencia(int* resultado){
    printf("O seu resultado é: %d", (*resultado));
}

int main(){
    int resultado = pow(6, 5);

    potencia(&resultado);
}


