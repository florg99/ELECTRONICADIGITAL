// EJERCICIOSEDI.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <stdio.h>
#include <string.h>
void negacion_XOR(int* num, int cant);
void invertirarray(int* array, int cant);
//void invertircaracter(char* array);
int main()
{
    // TAREA!!!
    // negacion usando xor
    // invertir un array de enteros
    // invertir un array de char
    int pruebaneg[5];
    printf("Ingresar 5 enteros para negarlos\n");
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &pruebaneg[i]);

    }
    printf("************************* IMPRESION EN HEXA\n");
    for (int i = 0; i < 5; i++) {
        printf("%x\n", pruebaneg[i]);
    }
    printf("************************* NEGACION EN HEXA\n");
    negacion_XOR(pruebaneg, 5);
    printf("Ingresar array de 5 enteros\n");
    int array[5];
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &array[i]);
    }
 

    invertirarray(array, 5);
    printf("Ingresar cadena de 5 caracteres\n");
    char array_caracter[6];
    for (int i = 0; i < 5; i++) {
        scanf_s("%s", &array_caracter[i], 1);
    }
    //invertircaracter(array_caracter);
    return 0;
}

void negacion_XOR(int* num, int cant)
{
    int* numneg = new int[cant];
    for (int i = 0; i < cant; i++)
    {
        numneg[i] = num[i] ^ 0xffffffff;
        printf("%x\n", numneg[i]);
    }
    delete[] numneg;
}
void invertirarray(int* array, int cant)
{
    int* invert = new int[cant];
    int* aux = new int[cant];
    for (int i = cant; i > 0; i--) {
        aux[cant - i] = array[i - 1];
        printf("%d\n", aux[cant - i]);
    }
    delete[] aux;
    delete[] invert;
}

/*void invertircaracter(char* array)
{
    int longitud = strlen(array);
    char* invert = new char[longitud+2];
    char* aux = new char[longitud + 2];
    for (int i = longitud+2; i > 0; i--) {
        if (i == longitud + 1) {
            aux[i] = array[i];
        }
        aux[longitud - i] = array[i - 1];
        printf("%d\n", aux[longitud - i]);
    }
    delete[] aux;
    delete[] invert;
}
*/
