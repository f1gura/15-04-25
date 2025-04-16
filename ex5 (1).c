#include <stdio.h>
#include "igualdade.h"


int main(){

    int a,b;

    printf("escreva um numero: ");
    scanf("%d",&a);

    printf("escreva um numero: ");
    scanf("%d",&b);


if (igual(a,b) == 1){

    printf("iguais:  %d\n", igual(a,b));

}else{

    printf("iguais:  %d\n", igual(a,b));
    printf("maior:  %d\n",maior(a,b));
    printf("menor:  %d\n", menor(a,b));

    }



    return 0;
}