#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void inicArreglo (int a[], int d);
void cargarArreglo(int *a, int *v,int *d);
void mostrarArreglo(int a[], int v);

int main()
{
    int dim = 2;
    int *a = (int *)malloc(sizeof(int) * dim);
    int validos = 0;
    cargarArreglo(a, &validos, &dim);
    mostrarArreglo(a,validos);

    return 0;
}

/** 1. Se tiene un arreglo de n�meros enteros positivos. Se desea obtener el promedio de sus valores. Para ello se debe:


c. Hacer una funci�n que sume el contenido del arreglo y lo retorne.
d. Hacer una funci�n que cuente la cantidad de valores ingresados.
e. Hacer una funci�n que reciba como par�metro el arreglo ya cargado, calcule y retorne el valor promedio
usando las funciones anteriores (c y d).
f. Hacer la funci�n main correspondiente. **/

/// a. Hacer una funci�n que inicialice las celdas del arreglo en �1.
void inicArreglo (int a[], int d){

    for(int i = 0; i < d; i ++){
        a[i] = -1;
    }
}

///b. Hacer una funci�n que permita al usuario ingresar los valores. No se conoce la cantidad de antemano.

void cargarArreglo(int *a, int *v,int *d){

    int num;
    int i = *v;
    int opcion = 0;

    while(opcion != 27){
        if(i == d){
        *d += 50;
        a = (int *)realloc(a, sizeof(int) * (*d));
        }
        printf("\nIngrese un valor: ");
        scanf("%i", &num);
        a[i] = num;
        i ++;
        printf("\nSeguir ingresando?: ESC: NO / CUALQ. TECLA: SI");
        opcion = getch();
        system("cls");

    }
    *v = i;
}

void mostrarArreglo(int a[], int v){
    int i = 0;

    while(i < v){
        printf("|%i|", a[i]);
        i++;
    }
}
