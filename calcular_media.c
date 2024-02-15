#include <stdio.h>

int main(){
float a1;
float a2;
float a3;
float a4;
float media;

printf("digite a nota do aluno: \n");
scanf("%f", &a1);    

printf("digite a nota do aluno: \n");
scanf("%f", &a2);

printf("digite a nota do aluno: \n");
scanf("%f", &a3);

printf("digite a nota do aluno: \n");
scanf("%f", &a4);

 media = (a1+a2+a3+a4) /4;

  printf("a nota media do aluno  é %2.2f \n",media);

  return 0;

}

