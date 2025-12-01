#include <stdio.h>

int main(void) {

    //Variable que guarda la cantidad de productos a registrar
    int opcion;

    do {
        printf("\n*----------------MENU----------------*\n");
        printf("\nAdvertencia este es un cambio critico!!!");
        printf("\n1. Capturar una lista de productos");
        printf("\n2. Buscar un producto por codigo");
        printf("\n3. Actualizar la existencia de un producto\n");

        printf("\nIngrese su opcion: ");
        scanf("%d",&opcion);

    }while (opcion <=0 || opcion>4);

    printf("\nSaliste del bucle...");
    printf("\nLa prueba fue exitosa");

    return 0;
}