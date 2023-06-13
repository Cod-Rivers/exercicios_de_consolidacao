#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


// exercicio do video https://www.youtube.com/watch?v=anjQuD0zVIs
//Estruturas de dados
/*
struct
*/

struct componente
{
char tipo[20];
char referencia[4];
unsigned char num_ref; // como o numero maximo utilizado nessa variavel sera inferior a 255 foi utilizado o unsigned char ao invés de int para poupar espaço de memoria.
int valor;
char unidade[10];

}; //termina com  ponto e virgula por que o struct não é uma função e sim um declaração da linguagem C

struct componente comp;  // criação da variavel de controle de estrutura de nome comp, nesse caso foi chamado a declaração componente para a criação dessa estrutura. pode ser criado mais de uma variavel de controle separando com virgulas. semelhante a criação de um novo objeto.

int main(int argc, char *argv[])
{
printf("tipo do componente ___________:");
fflush (stdin); //função da bibliootea "coni.h"
fgets(comp.tipo,20,stdin); //comp é a variavel da estrutura de nome tipo

printf("referencia do componente _________:");
ffflush(stdin);
fgets(comp.referencia,4,stdin);

printf("Numero da referencia ___________:");
scanf("%c",&comp.num_ref,);
getchar(); //aconselhavel para limpar os buffers do teclado

printf("Valor do componente ________: ");
scanf("%d",&comp.valor);
getchar();

printf("Unidade ______________:");
fflush(stdin);
fgets(com.unidade,10,stdin); // é utilizado fgets por ser uma string

printf("\n\nComponente Criado:\n\n");
printf("%s\n",comp.tipo);
printf("%s",comp.referencia);
printf("%c",comp.num_ref);
printf("\nValor:%d",comp.valor);
printf("%s \n\n",comp.unidade);


}



