#include <stdio.h>
int numero(void){
	
    int n;
    
	printf("escreva um numero \n");
    scanf("%d ",&n);
   
    return n;
}

int soma(){
	
    int n1,n;
    
	printf("escreva um numero \n");
    scanf("%d %d",&n , &n1);
    
    return n + n1;
}

int soma_exibe(){
	
    int n1,r,n;
    
	printf("escreva um numero \n");
    scanf("%d %d",&n , &n1);
    r = n + n1;
    printf("sua soma e: %d",r);
}

int main(){
    int x;
	x = soma();
    printf("%d",x);
	
}