//Arellanes Aniceto Gabriel 
//Ejercicio Calculadora con Funciones 
#include <stdio.h>
#include <math.h>
float suma(float a, float b)
{
  float res
  res = a+b;
  return (res);
}
float suma(float a, float b)
{
  return (a+b);
}
float resta( float a, float b)
{
  return (a-b);
}
float producto( float a, float b)
{
  return (a*b);
}
float division ( float a, float b)
{
  return (a/b);
}
float potencia( float a, int b)
{
  float res;
  res= pow(a,b);
  return (res);
}
float raiz( float a, int b)
{
  return (sqrt(a,b));
}
void main()
{
  float res;
  float a,b;
  int c;
  do
    {
  printf("Menu\n  1. Suma\n 2. Resta\n 3. Multiplicacion\n 4. Division\n 5. Raiz Cuadrada\n 6. Potencia\n 0. Salir\n");
  printf("Selecciona la operacion que quieres realizar: ");
  scanf ("%i",&op);
    }
  while (op>0 || op<6)
  switch (op)
    {
      case 1:
      res= suma(a,b);
      break;
      case 2:
      res= resta(a,b);
      break;
      case 3:
      res= producto(a,b);
      break;
      case 4:
      res= division (a,b);
      break;
      case 5:
      res= potencia(a,c);
      break;
      case 6:
      res= raiz(a,c);
      break;
    }
  
}
