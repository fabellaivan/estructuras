#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    int dia;
    int mes;
    int anio;
} eFecha;

typedef struct
{
    char nombre[20];
    int legajo;
    int edad;
    char sexo;
    float sueldo;
    eFecha fechaIngreso;
} eEmpleado;
////////////////////////////////
void mostrarEmpleado(eEmpleado unEmpleado);
////////////////////////////////
int main()
{
    //int x;
    /*struct  eEmpleado empleado1; con tipedef no es necesario*/
    eEmpleado emp1;//={"ivan",28,'f',67500,{23,04,2021}};
    eEmpleado emp2;
    eFecha auxFecha;
    //emp2=emp1;


    printf("ingrese nombre: ");
    fflush(stdin);
    gets(emp1.nombre);

    printf("Ingrese edad: ");
    scanf("%d",&emp1.edad);

    printf("ingrese sexo: ");
    fflush(stdin);
    scanf("%c",&emp1.sexo);

    printf("Ingrese Legajo: ");
    scanf("%d",&emp1.legajo);

    printf("Ingrese Sueldo: ");
    scanf("%f",&emp1.sueldo);

   /* printf("ingrese dia de ingreso: ");
    scanf("%d",&emp1.fechaIngreso.dia);
    printf("ingrese mes de ingreso: ");
    scanf("%d",&emp1.fechaIngreso.mes);
    printf("ingrese año de ingreso: ");
    scanf("%d",&emp1.fechaIngreso.anio);*/
    printf("Ingrese fecha de ingreso: ");
  /*  scanf("%d/%d/%d",&emp1.fechaIngreso.dia,
                     &emp1.fechaIngreso.mes,
                     &emp1.fechaIngreso.anio);*/

    scanf("%d/%d/%d",&auxFecha.dia,
                     &auxFecha.mes,
                     &auxFecha.anio);
    emp1.fechaIngreso=auxFecha;



   // printf("%d\n",sizeof(eEmpleado));//veo los byts que ocupa


    //   printf("%s\n",emp1.nombre);
    // printf("%d\n",emp1.edad);
    mostrarEmpleado(emp1);
    mostrarEmpleado(emp2);
    return 0;
}
void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%s %d %.2f %d %02d/%02d/%02d %c\n",
           unEmpleado.nombre,
           unEmpleado.edad,
           unEmpleado.sueldo,
           unEmpleado.legajo,
           unEmpleado.fechaIngreso.dia,
           unEmpleado.fechaIngreso.mes,
           unEmpleado.fechaIngreso.anio);
}





