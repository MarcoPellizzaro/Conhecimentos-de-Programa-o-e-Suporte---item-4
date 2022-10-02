#include <stdio.h>

void ConcatERemove(char[],char[],int);

int main(void) {
  char s[100];
  char t[100];
  int k;
  printf("insira a String inicial\n>>");
  scanf("%s", s);
  printf("insira a String desejada\n>>");
  scanf("%s", t);
  printf("Insira o toal de operações\n>>");
  scanf("%d", &k);

  ConcatERemove(s,t,k);
  return 0;
}

void ConcatERemove(char s[100],char t[100],int k){
  int tamanhoS = strlen(s);
  int tamanhoT = strlen(t);
  int cont = 0; //conta quantas trocas são desncessarias
  //verifica elemento por elemento da primeira string
  for(int i = 0; i < tamanhoS; i++){
    //verifica elemento por elemento da segunda string
    for(int j = 0; j < tamanhoT; j++){
      if(s[i] == t[j]){
        //se encontrar uma letra igual ela não precisa ser trocada
        cont += 1;
        t[j] = ' '; //impede que a mesma letra seja verificada de novo
        j = tamanhoT; //sai do segundo for
      }
    }
  }

  int op_necessarias = (tamanhoS + tamanhoT) - cont*2;
  //o total de operações necessárias é igual aos tamanhos das strings
  //mas, cada letra que se repete exige 2 operações a menos, ou seja,
  //cont*2
  
  if(op_necessarias <= k){
    printf("sim");
  }
  else{
    printf("não");
  }
}
