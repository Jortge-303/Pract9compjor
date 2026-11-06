#include <stdio.h>
/*
Ej.3 la conjetura de Collatz dice que si operamos infinitamenre cualquier número entero N con las reglas siguientes siempre llegamos a 1 (en un ciclo infinito)
• Si el número es par, se divide entre 2 (n / 2).
• Si el número es impar, se multiplica por 3 y se le suma 1 (3n + 1)
*/

int main(){
    int jor = 0;
    printf("Ingrese un entero positivo cualquiera: ");
    scanf("%d", &jor);
    while(jor > 1){
        printf("%d ->", jor);
        if(jor%2 == 0){
            jor = jor/2; //jor/2=2
        } else{
            jor = (3*jor) + 1;
        }
    }
    printf("%d\n", jor);
    return 0;







}