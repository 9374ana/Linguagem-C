#include <stdio.h>

int main(){
    int num;

    printf("digite um ano: \n");
    scanf("%d" ,&num);
    
    if(num%4==0){
        printf("É um ano  bissexto. \n");
    }
    else{
        printf("Não é um ano bissexto. \n");
    }
    return 0;
}

