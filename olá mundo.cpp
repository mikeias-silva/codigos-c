#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
//  ==========                 ==========
//  ========== www.eXcript.com ==========
//  ==========                 ==========

int main(void){
  
    setlocale(LC_ALL, "Portuguese");
    //imprime a mensagem que estive entre aspas duplas
    printf("Ola mundo.");
  
    //valor de retorno para a função principal
    //indicando que o programa acabou
    return 0;
}