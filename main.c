#include <stdio.h>

int pares[7];
int Pares() {

  int x = 0;

  printf("Digite números pares maiores que zero:\n");

  for(x=0;x<7;x++){
    do{
      scanf("%d", &pares[x]);
      if(pares[x] < 0 || pares[x] %2 != 0){
        printf("\nNúmeros impares ou negativos não são aceitos!\n");
      }
    } while(pares[x] < 0 || pares[x] %2 != 0);
  }

return 0;
}

int Soma5(){


return 0;
} 

/*Crie a função Pares para armazenar 7 números pares e no vetor Pares.
Crie a função Soma5 para somar todos os números divisíveis por 5
contidos no vetor Pares. Exiba o valor obtido na função soma5 dentro dessa função.
O vetor Pares é uma variável global.*/

int main() {
    Pares();
    Soma5();
  
}