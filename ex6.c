#include <stdio.h>
#include "igualdade.h"


int numero(int x){

    printf("digite um numero: ");
    scanf("%d",&x);
    return x;

    }

    
int main(){

    int a,b,c,d,e;


    printf("escreva tres numeros: ");
    scanf("%d %d %d",&a,&b,&c);

    
    

    d = maior(a,b);
    e = maior (d , c);

    printf("o numero maior e:  %d\n", e);




    return 0;
}


