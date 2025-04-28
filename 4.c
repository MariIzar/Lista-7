#include <stdio.h>
void maiorMenor(int a, int b, int *maior, int *menor){
    if (a>b){
        *maior= a;
        *menor= b;
    }
    else {
        *maior= b;
        *menor= a;
    }
}
int main(){
    int a, b, maior, menor;
    printf("digite valores para a e b: ");
    scanf ("%d %d", &a, &b);
    maiorMenor(a, b, &maior, &menor);
    printf ("o maior numero eh: %d\n", maior);
    printf("o menor numero eh: %d\n", menor);
    return 0;
}