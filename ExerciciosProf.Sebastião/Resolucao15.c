/*15.Escreva um programa que coloque na tela a seguinte frase:
Bem-vindos ao /Mundo\ da programação em "C".
João Paulo Araujo Valverde de Souza
UC24101226*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    //UTILIZADA PARA QUE EU POSSA ESCREVER CONFORME MINHA LINGUA PEDE, COM ACENTOS E OUTROS
    setlocale(LC_ALL,"PORTUGUESE");

    //IMPRIMINDO NA TELA
    printf("Bem-vindos ao /Mundo\\ da programação em 'C'.");

    return 0;
}
