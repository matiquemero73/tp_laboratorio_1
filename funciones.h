#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int resultado;

void suma (a,b){
resultado = a + b;
printf("\nLa suma de A y B es %d ", resultado);
}
void resta(a,b){
resultado = a - b;
printf("\nLa resta de A y B es %d ", resultado);
}
void division(a,b){
    if(b!=0){
        resultado = a / b;
        printf("\nLa division de A y B es %d ", resultado);
    } else {
    printf("\nEl paramatro B es incorrecto ya que tiene valor cero, ingrese otro valor de B ");
    }
}
void multiplicacion(a,b){
resultado = a * b;
printf("\nLa multiplicacion de A y B es %d ", resultado);

}

void factorial (a){
  int c;
  resultado = 1;

  for (c = a; c > 1; c--){
    resultado = resultado * c;
}
printf("\nEl factorial de A es %d ", resultado);
}

void todaslasoperaciones (a,b){
suma(a,b);
resta(a,b);
division(a,b);
multiplicacion(a,b);
factorial(a);
}

#endif // FUNCIONES_H_INCLUDED


