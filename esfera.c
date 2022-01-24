#include <stdio.h>
#include <math.h>

main() {

float rad, den, masa, peso, g, vol;	

printf("Vamos a calcular el peso de una esfera \n");

printf("ES IMPORTANTE QUE ESCRIBAS CADA DATO EN LAS UNIDADES SOLICITADAS \n"); 

printf("Favor ingresa el radio (en metros) \n");

scanf("%f", &rad);

printf("Favor ingresa la densidad (kilogramo / metro cubico) \n");

scanf("%f", &den);

vol = (4*(3.141517)* (rad) * (rad) * (rad)) /3;

masa = den * vol;

printf("La masa de la esfera es %f kilogramos \n", masa);

printf("Ahora suponemos que la esfera esta en reposo por lo que su peso es su masa multiplicada por la gravedad cerca de la Tierra en la cdmx esto es 9.81 \n\n");

peso = masa * 9.81; 

printf("El peso de la esfera es de %f Newtons \n", peso);

//return 0;
}
