#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "dataNote.h"

/*Crear una función llamada aplicarDescuento que reciba como
 parámetro el precio de un producto y devuelva el valor del producto
 con un descuento del 5%. Realizar la llamada desde el main. **/

/* Crear una función que se llame contarCaracteres que reciba una
 cadena de caracteres como primer parámetro y un carácter como segundo
 y devuelva la cantidad de veces que ese carácter aparece en la cadena*/




typedef struct
{
    int id;
    char procesador;
    char marca;
    float precio;
    int estado;

} eNotebook;

void hardcodearNotebooks(eNotebook arrayNotebook[],int cantidadNotebook);


float aplicarDescuento(float precio);

int contarCaracteres(char cadena[],char x);


int main()
{
  /*1*/
  /*
      float prec;

      float descuento;


      printf("ingrese precio:");
      scanf("%f",&prec);



      descuento=prec-aplicarDescuento(prec);
      printf("%.2f (precio descontado)", descuento);
*/


//-----------------------------------------------------------------------------------------------------


/*2*/

/*
    char cadena1[20]="jose";
    int cantidad;
    char letra='e';



    cantidad=contarCaracteres(cadena1,letra);
    printf("Tiene %d caracteres ",cantidad);

*/


//--------------------------------------------------------------------------------------------------------------------------


/*3*/
    /*eNotebook notebook[3];
    eNotebook aux;

    hardcodearNotebooks(notebook,3);

    for(int i=0; i<3-2; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(strcmp(notebook[i].marca,notebook[j].marca)>0)
            {
                aux=notebook[i];
                notebook[i]=notebook[j];
                notebook[j]=aux;
            }
            else if(strcmp(notebook[i].marca,notebook[j].marca)==0&&notebook[i].precio>notebook[j].precio)
            {
                aux=notebook[i];
                notebook[i]=notebook[j];
                notebook[j]=aux;
            }

        }

    }
*/









    return 0;
}




float aplicarDescuento(float precio)
{

    float descuento;

    descuento=precio*5/100;
    precio-=descuento;

    return descuento;


}

int contarCaracteres(char cadena[],char x)
{
    int contador=0;
    while(cadena[contador]!= '\0' && x  )
    {
        contador++;

    }
    return contador;
}




void hardcodearNotebooks(eNotebook arrayNotebook[],int cantidadNotebook)
{

    for(int i=0; i<cantidadNotebook; i++)
    {
        arrayNotebook[i].id=ids[i];
        strcpy(arrayNotebook[i].procesador,procesadores[i]);
        strcpy(arrayNotebook[i].marca,marcas[i]);
        arrayNotebook[i].precio=precios[i];

        arrayNotebook[i].estado=1;
    }

}




