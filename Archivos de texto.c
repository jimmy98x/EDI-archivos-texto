#include<stdio.h>
#include<stdlib.h>


#define MAX_ALUMNOS 6
#define n 10

void Calificaciones(int alumnos,float calif[MAX_ALUMNOS]);
float prom(float *CalProm, int alum);


int main()
{
    int NumAlumnos;

    float calificaciones[MAX_ALUMNOS];
    float promedio;

    printf("Numero de alumnos: ");
    scanf("%d",NumAlumnos);

    Calificaciones(NumAlumnos,calificaciones);
    promedio(calificaciones,NumAlumnos);

    printf("Promedio: %.2f",promedio);

    return 0;
}

void Calificaciones(int alumnos,float calif[MAX_ALUMNOS])
{
    char nombre[n];
    FILE *archivo;
    int cerrado;
    archivo = fopen("ALUMNOS.txt","r");
    archivo = fopen("ALUMNOS.txt","w");

    int i;
    for(i=0;i<alumnos;i++)
    {
        printf("Dime el nombre del Alumno %d: ",i+1);
        scanf("%s",nombre);
        printf("Calificacion: ");
        scanf("%f",calif[i]);
        printf("\n");
    }
    cerrado = fclose(archivo);

}

float prom(float *CalProm, int alum)
{
    int i;
    int suma=0;
    float promedio;

    FILE *archivo;
    int cerrado;
    archivo = fopen("ALUMNOS.txt","r");
    archivo = fopen("ALUMNOS.txt","a");

    for(i=0;i<estudiantes;i++)
    {
        suma=suma+CalPromedio[i];
    }

        promedio=suma/estudiantes;
        printf("Promedio: %.2f ",promedio);
        fprintf(archivo,"Promedio grupo: %.2f",promedio);
    cerrado = fclose(archivo);
       return promedio;
}
