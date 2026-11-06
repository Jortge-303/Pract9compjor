#include <stdio.h>
int main (){
    int jor=0;
    printf("Ingrese número a verificar propiedad prima\n");
    scanf("%d", &jor);
    //break
    int es_primo = 0; //si es 0 -> es primo si es 1 no lo es
    for (int i=2; i<jor; i++){
        if(jor%2 == 0 ){
            es_primo = 1;
            break;
        
        }
    }
    if(es_primo == 0){
        printf(" %d Sí es primo \n", jor);

    }else{
        printf("%d No es primo \n,", jor);
    }
    printf("\n");











    return 0;
}