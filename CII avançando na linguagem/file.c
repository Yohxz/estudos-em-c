#include <stdio.h>

int main(){
FILE* f;

f =fopen("teste.txt", "r");
if(f==0){
    printf("Desculpe, falha ao se conectar ao banco de dados.");
    exit(1);
}
fclose(f);
}