# Estudo da linguagem C
## Neste repositório será publicado arquivos escritos em C

<img src="https://avatars.githubusercontent.com/u/25699522?s=200&v=4" height ="200" >

### Abaixo é apresentado os arquivos deste repositório

#### hello.c

```c
#include <stdio.h>
int main(){
    printf("hello world\n");
    return 0;
}
```

#### primeiro.c
```c
/*
Este programa pede ao usuário um número qualquer e depois exibe o número na tela
*/
#include <stdio.h> //estamos importando uma biblioteca para trabalhar com entrada e saidas de dados


int main(){
    int idade; //declaração da variável idade do tipo inteiro
    printf("Digite a sua idade e tecle enter\n");
    scanf("%d", &idade); //para pegar o número digitado pelo usuário estamos usando o comando scanf e adicionando
                         //o valor digitado ao endereço de memória da variável idade. Usamos  o e-comercial para
                         //referenciar o endereço de memória da variavel idade
    printf("A idade digitada é %d\n endereço da variável idade %x\n ",idade, &idade);
    return 0;


}

```

### operacoes.c
```c
#include<stdio.h>

int main(){
    int n1;
    int n2;
    int soma;
    int subtrair;
    int multiplicar;
    int dividir;

    printf("Digite um número e tecle enter: \n");
    scanf("%d",&n1);

    printf("Digite outro número e tecle enter: \n");
    scanf("%d",&n2);

    soma = n1 + n2;
    subtrair = n1 - n2;
    multiplicar = n1 * n2;
    dividir = n1 / n2;

    printf("O resultado da soma é %d\n",soma);
    printf("O resultado da subtração é %d\n",subtrair);
    printf("O resultado da multiplicação é %d\n",multiplicar);
    printf("O resultado da divisão é %d\n",dividir);
    return 0;
}
```

#### desconto produto.c
```c
#include <stdio.h>

int main(){
    float preco;
    float percentual;
    float resultado;
    float vdesc;
    
    
    printf("Digite o preço do produto: \n");
    scanf("%f", &preco);
    printf("Digite o desconto do produto: \n");
    scanf("%f",&percentual);

    resultado = preco - (preco* ( percentual /100));

    vdesc = preco - resultado;
    printf("O preço final do produto com desconto é %2.2f é %2f\n" ,vdesc,resultado);

    return 0;

}
```

#### desvio de fluxo: parimpar.c

```c
#include <stdio.h>

int main(){
    int num;
    printf("Digite um número: \n");
    scanf("%d",&num);

    if(num % 2 == 0){
       printf("Este número é par \n");
    }
    else{
        printf("Este número é impar \n");
    }
    return 0;
}
```

#### Média_aluno.c

```c
/*
Neste programa iremos calcular a nota média do aluno. Teremos a entrada de 4 notas, depois será feito o cálculo de média, onde iremaos somar as notas e depois dividir por 4.
Se o aluno tiver uma média acima ou igual a 7, então estará aprovado; caso o aluno tenha uma nota menor ou igual a 4, então o aluno estará reprovado; caso contrário, estará em recuperação
*/

#include <stdio.h>

int main(){
    float n1,n2,n3,n4,md;
    printf("Digite a primeira nota: \n");
    scanf("%f" ,&n1);

    printf("Digite a segunda nota: \n");
    scanf("%f" ,&n2);

    printf("Digite a terceira nota: \n");
    scanf("%f" ,&n3);

    printf("Digite a quarta nota: \n");
    scanf("%f" ,&n4);

    md = (n1+n2+n3+n4) / 4;

    printf("A nota média do aluno é %2.2f \n",md);

    if( md >= 7 ){
        printf("Aprovado \n");
    }
    else if( md <= 4 ){
        printf("Reprovado \n");
    }
    else{
        printf("Recuperação \n");
    }
    return 0;


    }

```

#### bissexto.c
```c
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

```