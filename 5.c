#include <stdio.h>
void fatorial(int n, int *resultado){
    *resultado = 1;
    for (int i = 2; i <= n; i++) {
        *resultado *= i;
    }
} 
int main(){
    int n, resultado;
    printf ("digite um valor de fatorial: ");
    scanf ("%d", &n);
    fatorial(n, &resultado);
    printf("o fatorial desse numero eh: %d\n", resultado);
    return 0;
}