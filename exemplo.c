#include <stdio.h>
int main(){
   
   int idade;
   
   printf("Informe a sua idade: ");
   scanf("%d", &idade);
   
   if((idade >= 18) && (idade <= 25)){
     printf("Voc� faz parte do p�blico jovem-adulto.");  
    } else {
     printf("Voc� n�o faz parte do p�blico jovem-adulto.");
    }
}
