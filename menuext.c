#include <stdio.h>

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        
        printf("\n--- CALCULADORA DE KINDER ---\n");
        printf("1. Sumar los numeros\n");
        printf("2. Restar los numeros\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion (1-3): ");
        scanf("%d", &opcion);

        // Procesar la opción seleccionada con el conmutador por opciones
        switch (opcion) {
            case 1:
                printf("Ingrese el primer numero: ");
                scanf("%f", &num1);
                printf("Ingrese el segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 + num2;
                printf("El resultado de la suma es: %.2f\n", resultado);
                break;

            case 2:
                printf("Ingrese el primer numero: ");
                scanf("%f", &num1);
                printf("Ingrese el segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 - num2;
                printf("El resultado de la resta es: %.2f\n", resultado);
                break;

            case 3:
                printf("Programa finalizado, buen día :)\n");
                break;

            default:
                printf("OPCIÓN INVÁLDA, VUELVA A INTENTAR\n");
        }

    } while (opcion != 3); // el final del programa

    return 0;
}
