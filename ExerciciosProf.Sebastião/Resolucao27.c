/*27.Escreva um programa que solicite ao usuário uma determinada data e a mostre em seguida no formato
dd/mm/aaaa.
João Paulo Araujo Valverde de Souza
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
    printf("OLÁ, DIGITE UM DIA DE SUA ESCOLHA POR GENTILEZA, NO FORMATO 00\n");
    scanf("%d", &dia);

   //INSERINDO MES
    printf("\nDIGITE UM MÊS DE SUA ESCOLHA POR GENTILEZA, NO FORMATO 00\n");
    scanf("%d", &mes);

   //INSERINDO ANO
    printf("\nDIGITE UM ANO DE SUA ESCOLHA POR GENTILEZA, NO FORMATO 0000\n");
    scanf("%d", &ano);

   //IMPRIMINDO A DATA COMPLETA
    printf("\n%d/%d/%d", dia, mes, ano);

    return 0;
}
