//Arellanes Aniceto Gabriel
//Ejercicio_2: Utilizando una lista capturar las 5 calificaciones de un alumno e imprimir el promedio
#include <stdio.h>
void main ()
{
  int list[5];
  int i;
  float P,S=0;
  for(i=0;i<5;i++)
    {
      printf("Ingresa tu calificacion %d : ",i+1);
      scanf("%d",&list[i]);
      S = S+list[i];
      P=  S/5;
    }
    printf("El promedio de las calificaciones es: %.2f", P);
}
