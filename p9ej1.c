#include <stdio.h>
int main (){
    int jor = 0;
    printf("Ingrese el número límite a encontrar pares\n");
    scanf("%d", &jor);
    printf("Los números son: ");
    for (int i=1; i<=jor; i++){
        if( i%2 == 0 ){
            
            printf("%d, ", i);
        }
    }
    printf("\n");











    return 0;
}