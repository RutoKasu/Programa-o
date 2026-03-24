#include<stdio.h>

void main()
{
    /*Para representar caracteres especiais basta colocar o "\" antes 
    de qualquer caracteres especial, por exemplo*/

    printf("Eu sou \"Foda\"") /*A frase será (Eu sou "Foda" )*/
                              /*Sem a barra, teria um erro sinalizando algo
                              entre duas string (Eu sou) e (), que no caso seria a palavra
                              "Foda"*/
}