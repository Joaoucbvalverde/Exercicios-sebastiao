/*27.Escreva um programa que solicite ao usu�rio uma determinada data e a mostre em seguida no formato
dd/mm/aaaa.
Jo�o Paulo Araujo Valverde de Souza
UC24101226*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

    //INSERINDO VARIAVEIS
    int dia, mes, ano;

    //UTILIZADA PARA QUE EU POSSA ESCREVER CONFORME MINHA LINGUA PEDE, COM ACENTOS E OUTROS
    setlocale(LC_ALL,"PORTUGUESE");

   //INSERINDO DIA
    printf("OL�, DIGITE UM DIA DE SUA ESCOLHA POR GENTILEZA, NO FORMATO 00\n");
    scanf("%d", &dia);

   //INSERINDO MES
    printf("\nDIGITE UM M�S DE SUA ESCOLHA POR GENTILEZA, NO FORMATO 00\n");
    scanf("%d", &mes);

   //INSERINDO ANO
    printf("\nDIGITE UM ANO DE SUA ESCOLHA POR GENTILEZA, NO FORMATO 0000\n");
    scanf("%d", &ano);

   //IMPRIMINDO A DATA COMPLETA
    printf("\n%d/%d/%d", dia, mes, ano);

    return 0;
}
