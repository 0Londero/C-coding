//1) Faça um programa que leia um valor inteiro X indefinidas vezes. 
//(O programa irá parar quando o valor de X for igual a 0). 
//Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive, se X for par. 
//Se o valor de entrada for 4, por exemplo, a saída deve ser 40, 
//que é o resultado da operação: 4+6+8+10+12, enquanto que se o valor de entrada for 11, por exemplo,
// a saída deve ser 80, que é a soma de 12+14+16+18+20.



// Otavio Londero



#include <stdio.h>
#include <stdlib.h>

//Parte 1 - inicializa a função que calcula se o número é par, retornando v ou f.
int par(int num) 
{
    return num % 2 == 0;
}

//Parte 2 - inicializa a função principal
int main()
{
//Parte 3 - inicialização das variáveis
int valorx;
int soma = 0;

//Parte 4 - Processamento
while (1) 
{
    printf("Digite um valor: ");
    scanf("%d", &valorx);

// Caso valor digitado for = 0, sai do programa
if (valorx == 0)
{
    break;
}

// Se o valor for par
if (par(valorx)) 
{

// Entao
for (int repeticao = valorx; repeticao < valorx + 10; repeticao += 2) 
{
    soma += repeticao;
}
}
}
// Saída do código
printf ("Soma dos 5 pares consecutivos: %d\n", soma);
return 0;
}
