#include <stdio.h>
#include <stdlib.h>

float subtotal1 = 0, subtotal2 = 0, subtotal3 = 0, subtotal4 = 0, subtotal5 = 0;
float precio1 = 150, precio2 = 55, precio3 = 180, precio4 = 70, precio5 = 120;
float num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
float subtotal = 0, total = 0;

char nombre[50], cedula[20];

int main(int argc, char *argv[])
{
    char opcion;
    int dato;
    while (1)
    {
        Menu2:
        printf("\t\t\t BIENVENIDO AL SISTEMA DE FACTURACION\n");
        printf("Seleccione una opccion\n\n");
        printf("1.	Facturar producto\n");
        printf("2.	Imprimir factura\n");
        printf("3.	Salir\n");
        scanf("%d", &dato);
        getchar();
        fflush(stdin);
        system("cls");

        switch (dato)
        {
        case 1:

        Menu:

            printf("Seleccione una opccion\n\n");

            printf("a) Llantas (Precio: $150)\n");
            printf("b) Kit Pastillas de freno (Precio: $55)\n");
            printf("c) Kit de embrague (Precio: $180)\n");
            printf("d) Faro (Precio: $70)\n");
            printf("e) Radiador (Precio: $120)\n");
            scanf("%c", &opcion);
            getchar();
            fflush(stdin);
            system("cls");

            switch (opcion)
            {
            case 'a':
                printf("Ingrese el numero de Llantas que desea facturar: \n");
                scanf("%f", &num1);
                break;

            case 'b':
                printf("Ingrese el numero de Pastillas de freno que desea facturar: \n");
                scanf("%f", &num2);
                break;

            case 'c':
                printf("Ingrese el numero de Kits de embrague que desea facturar: \n");
                scanf("%f", &num3);
                break;

            case 'd':
                printf("Ingrese el numero de Faros que desea facturar: \n");
                scanf("%f", &num4);
                break;

            case 'e':
                printf("Ingrese el numero de Radiadores que desea facturar: \n");
                scanf("%f", &num5);
                break;

            default:
                break;
            }

            break;

        case 2:

        

            subtotal1 = num1 * precio1;
            subtotal2 = num2 * precio2;
            subtotal3 = num3 * precio3;
            subtotal4 = num4 * precio4;
            subtotal5 = num5 * precio5;

            subtotal = subtotal1 + subtotal2 + subtotal3 + subtotal4 + subtotal5;

            if (subtotal >= 501 && subtotal <= 1000)
            {

                total = subtotal * 0.96;
            }
            else if (subtotal >= 1001 && subtotal <= 5000)
            {
                total = subtotal * 0.93;
            }
            else if (subtotal >= 5001)
            {
                total = subtotal * 0.91;
            }
            printf("Ingrese el nombre del cliente\n");
            scanf("%[^\n]s", &nombre);
            printf("Ingrese la cedula del cliente\n");
            scanf("%s", &cedula);

            system("cls");

            printf("\t\t\t################################\n");
            printf("\t\t\t##########Factura###############\n");

            printf("Nombre: %s\n", nombre);
            printf("Cedula: %s\n", cedula);

            printf("Producto\t\tCantidad\t\tPrecio Unitario\t\tPrecio total\n");
            if (num1 != 0)
            {
                printf("Llants\t\t\t%.0f\t\t\t%.2f\t\t\t%.2f\n", num1, precio1, subtotal1);
            }
            if (num2 != 0)
            {
                printf("Pastillas de freno\t%.0f\t\t\t%.2f\t\t\t%.2f\n", num2, precio2, subtotal2);
            }
            if (num3 != 0)
            {
                printf("Kit de embrague\t\t%.0f\t\t\t%.2f\t\t\t%.2f\n", num3, precio3, subtotal3);
            }
            if (num4 != 0)
            {
                printf("Faro\t\t\t%.0f\t\t\t%.2f\t\t\t%.2f\n", num4, precio4, subtotal4);
            }
            if (num5 != 0)
            {
                printf("Radiador\t\t%.0f\t\t\t%.2f\t\t\t%.2f\n", num5, precio5, subtotal5);
            }

            printf("El subtotal es: %.2f\n", subtotal);
            printf("El total aplicado su descuento es de: %.2f\n", total);

            return 0;

            break;

        case 3:
            return 0;
            break;

        default:
            break;
        }

        system("cls");
        fflush(stdin);
        printf("Desea comprar otro objeto?\n");
        printf("Si desa comprar otro objeto ingrese 's', de lo contrario 'n'\n");
        scanf("%c", &dato);
        getchar();
        system("cls");

        if (dato == 's')
        {
            goto Menu;
        }
        else if (dato == 'n')
        {
            goto Menu2;
        }
    }
}