/*
4.	Construa um programa para calcular a área e de um círculo, a área deve ser 
do tipo de ponteiro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.1415
#endif

void calcular(float r, float *a);

int main(void){
	float raio, area;
	
	printf("Digite o raio: ");
	scanf("%f",&raio);
	
	calcular(raio,&area);
	
	printf("A area e %f",area);
	
	return 0;
}

void calcular(float r, float *a){
	*a=M_PI*pow(r,2);
}