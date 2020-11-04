#include <stdio.h>

/*Crie a função Pares para armazenar 7 números pares e no vetor Pares.
Crie a função Soma5 para somar todos os números divisíveis por 5
contidos no vetor Pares. Exiba o valor obtido na função soma5 dentro dessa função.
O vetor Pares é uma variável global.*/

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
  int x = 0, soma5 = 0;
  int cont5 = 0;
  
  for(x=0;x<7;x++){
    if(pares[x] %5 ==0){
      soma5 = soma5 + pares[x];
      cont5++;
    }
  }
  if(cont5 == 0){
    printf("\nNão há múltiplos de 5.");
  } else if(cont5 >= 1){
    printf("\nA soma dos números multiplos de 5 é: %d", soma5);
  }
  return 0;
} 

int main() {
    Pares();
    Soma5();  
}