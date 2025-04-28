#include <stdio.h>
void atualizaNota(float *nota){
    if (*nota + 0.5 < 10){
        *nota += 0.5;
    }
    else if (*nota + 0.5 >=10){
        *nota = 10;
    }
}

int main(){
    float nota;
    printf ("digite a nota: ");
    scanf ("%f", &nota);
    atualizaNota(&nota);
    printf("a nota atualizadas eh: %f\n", nota);
    return 0;
}