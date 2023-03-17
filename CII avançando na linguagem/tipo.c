#include <stdio.h>

int main(){
 
 int i;


    printf("insira seu numero: ");
    scanf("%d", &i);

 while(i < 10){
    printf("%d -> ", i);
    i++;

     if (i % 2 || 0) {
        printf("par!  ");
     }
     else{
        printf("impar!  ");
     }
 }


    

}