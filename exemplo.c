#include <stdio.h>
int main(){
   
   int idade;
   
   printf("Informe a sua idade: ");
   scanf("%d", &idade);
   
   if((idade >= 18) && (idade <= 25)){
     printf("Você faz parte do público jovem-adulto.");  
    } else {
     printf("Você não faz parte do público jovem-adulto.");
    }
}
