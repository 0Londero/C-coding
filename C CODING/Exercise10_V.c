// Faça um algoritmo que leia um número inteiro.
//Logo após verifique e mostre se o valor lido é um número “primo” ou “não”.



//LONDERO


#include <stdio.h>
#include <stdlib.h>

int main()
{
//declaração das variáveis
int numero;
int totaldedivisores = 1;
int controle = 0;

//____Entrada
printf ("Digite um numero: \n");

//____Processamento
scanf ("%d",&numero);

while (controle < (numero - 1))
    {
        controle ++;
if (numero % controle == 0)
    {
        totaldedivisores ++;
    }
    }


//___Saida
if (totaldedivisores == 2)
    {
        printf ("O numero e primo: \n");
    }
else
    {
        printf ("O numero nao e primo!: \n");
    }
                                                                return 0;
}