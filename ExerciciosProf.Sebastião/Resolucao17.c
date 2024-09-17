/*17.Escreva um programa que coloque na tela a seguinte saída:
Total = 100%
IVA = 17%
IRS = 15%
Líq. = 68%
João Paulo Araujo Valverde de Souza
UC24101226*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    //UTILIZADA PARA QUE EU POSSA ESCREVER CONFORME MINHA LINGUA PEDE, COM ACENTOS E OUTROS
    setlocale(LC_ALL,"PORTUGUESE");

    //IMPRIMINDO NA TELA
    printf("Total = 100%% \nIVA = 17%% \nIRS = 15%% \nLíq. = 68%%");

    return 0;
}
