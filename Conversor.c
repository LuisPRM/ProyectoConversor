#include <stdio.h>

int main() {
    float quetzales, dolares, euros;
    int opcion;

    printf("Bienvenido al conversor de monedas\n");
    
    do {
        printf("\nElija una opción:\n");
        printf("1. Convertir de quetzales a dólares\n");
        printf("2. Convertir de quetzales a euros\n");
        printf("3. Convertir de dólares a quetzales\n");
        printf("4. Convertir de dólares a euros\n");
        printf("5. Convertir de euros a quetzales\n");
        printf("6. Convertir de euros a dólares\n");
        printf("7. Salir\n");
        scanf("%d", &opcion);

        switch(opcion)
            case 1:
                printf("Ingrese la cantidad en quetzales: ");
                scanf("%f", &quetzales);
                dolares = quetzales / 7.81; 
                printf("La cantidad en dólares es: $%.2f\n", dolares);
                break;
            case 2:
                printf("Ingrese la cantidad en quetzales: ");
                scanf("%f", &quetzales);
                euros = quetzales / 8.53; 
                printf("La cantidad en euros es: %.2f€\n", euros);
                break;
            case 3:
                printf("Ingrese la cantidad en dólares: ");
                scanf("%f", &dolares);
                quetzales = dolares * 7.81; 
                printf("La cantidad en quetzales es: Q%.2f\n", quetzales);
                break;
            case 4:
                printf("Ingrese la cantidad en dólares: ");
                scanf("%f", &dolares);
                euros = dolares * 0.99; 
                printf("La cantidad en euros es: %.2f€\n", euros);
                break;
            case 5:
                printf("Ingrese la cantidad en euros: ");
                scanf("%f", &euros);
                quetzales = euros * 8.53; 
                printf("La cantidad en quetzales es: Q%.2f\n", quetzales);
                break;
            case 6:
                printf("Ingrese la cantidad en euros: ");
                scanf("%f", &euros);
                dolares = euros * 1.09;
                printf("La cantidad en dólares es: $%.2f\n", dolares);
                break;
            case 7:
                printf("Gracias por usar el conversor de monedas.\n");
                break;
            default:
                printf("Opción no válida.\n");
        }
    } while(opcion != 7);

    return 0;
}
