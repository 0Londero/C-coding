// 1. Elabore um algoritmo que, dada uma quantidade indeterminada de números, um de cada vez, 
//conte quantos números foram fornecidos e quantos deles são negativos, mostrando estas informações.


//Londero


//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

int main()
{

//Declaração das variáveis
char afirmacao;
int Numeros;
int QuantidadeNumeros;
int NumerosNegativos;

//Valor inicial
afirmacao = 'S';
QuantidadeNumeros = 0;
NumerosNegativos = 0;

//While de continuidade para o programa
while (afirmacao == 'S')
{

        printf ("Digite os numeros ou N para sair do programa: \n");
        scanf (" %c",&afirmacao); 
                //Fim do programa
                if(afirmacao == 'N')
                {
                        break;
                }

        scanf ("%d",&Numeros);
        QuantidadeNumeros++;

                //Se o número for negativo
                if (Numeros <0)
                {
                        NumerosNegativos++;
                }
}

//Saída
printf ("A Quantidade de numeros presente e: %d\n", QuantidadeNumeros);
printf ("A Quantidade de numeros negativos e: %d\n", NumerosNegativos);

return 0;
}
