#include <stdio.h>

int LerInt(){
  int numLido;
  scanf("%d", &numLido);

  return numLido;
}

int main(){

  int anterior, atual, cont;

  anterior = LerInt();

  for(cont = 1; cont<10; cont++){
    atual = LerInt();
    printf("%d ", abs(atual-anterior));
    anterior = atual;
  }
  
  return 0;  
}
