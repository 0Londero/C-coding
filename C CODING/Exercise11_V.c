//Escreva um algoritmo que, dados cem números, informe qual a diferença 
//entre a média dos primeiros 50 valores e a média dos últimos 50 valores.



//LONDERO


#include <stdio.h>
#include <stdlib.h>

int main()
{
//____Declaracao das variaveis;
int numeroinserido;

int listanum1;
int medialista1;
int controlex = 0;

int listanum2;
int medialista2;
int controley = 0;

int resultado;

//____Parte1
    printf ("Digite os primeiros cinquenta(50) valores da lista inicial \n");
while (controlex < 50) 
{
    controlex++;
    printf ("Proximo numero da primeira lista: \n");
    scanf ("%d",&numeroinserido);
    listanum1 = numeroinserido + listanum1;
}

//____Parte2
    printf ("digite os cinquenta(50) valores da segunda lista \n");
while (controley < 50)
{
    controley++;
    printf ("Proximo numero da segunda lista: \n");
    scanf ("%d",&numeroinserido);
    listanum2 = numeroinserido + listanum2;
}

//____Parte3
medialista1 = listanum1 / 50;
medialista2 = listanum2 / 50;

//____Parte4
resultado = medialista1 - medialista2;

//____Parte5
printf ("O resultado da media dos primeiros cinquenta valores e dos outros cinquenta valores e: %d \n",resultado);

}