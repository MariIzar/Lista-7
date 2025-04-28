#include <stdio.h>
void troca (int *a, int *b){
    int temp;
    temp= *a;
    *a= *b;
    *b= temp;
}
int main (){
    int a, b;
    printf("digite os valores de a e b: ");
    scanf("%d %d", &a, &b);
    troca (&a, &b);
    printf("os numeros com a ordem trocada eh: %d %d\n", a, b);
    return 0;
}
