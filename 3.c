#include <stdio.h>
void calculaOperacoes(int a, int b, int *soma, int *produto){
    *soma= a+b;
    *produto= a*b;
}
int main(){
    int a, b, soma, produto;
    printf ("digite valores para a e b: ");
    scanf ("%d %d", &a, &b);
    calculaOperacoes(a, b, &soma, &produto);
    printf("a soma de a e b eh: %d\n", soma);
    printf("o produto de a e b eh: %d\n", produto);
    return 0;
}