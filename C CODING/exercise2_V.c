//2. Elabore um algoritmo que leia 10 (dez) números  e encontre e mostre o maior valor informado.


//LONDERO



#include <stdio.h>
#include <stdlib.h>

int main()
{
//____Declaração das variáveis
int maiorvalor;
int numero;
int contagemnumeros = 0;

//____Processamento
printf ("Insira um numero: \n ");
scanf ("%d",&maiorvalor);

while (contagemnumeros <= 9)
{
printf ("Insira outro numero: \n");
scanf ("%d",&numero);

contagemnumeros++;

if (numero > maiorvalor)
{
    maiorvalor = numero;
}
}

//____Saida
printf ("O maior numero e: %d \n",maiorvalor);

return 0;
}