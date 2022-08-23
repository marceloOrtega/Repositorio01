/*Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx + c. O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes situações:
Se o usuário informar o valor de A igual a zero, a equação não é do segundo grau e o programa não deve fazer pedir os demais valores, sendo encerrado;
Se o delta calculado for negativo, a equação não possui raizes reais. Informe ao usuário e encerre o programa;
Se o delta calculado for igual a zero a equação possui apenas uma raiz real; informe-a ao usuário;
Se o delta for positivo, a equação possui duas raiz reais; informe-as ao usuário;*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 


main(){
	float a,b,c,delta,raiz1,raiz2;
	printf("Insira um valor para ser adotado como A: ");
	scanf ("%f", &a);
	
	printf("\nInsira um valor para ser adotado como B: ");
	scanf ("%f", &b);
	
	printf("\nInsira um valor para ser adotado como C: \n");
	scanf ("%f", &c);
	
	//ax2 + bx + c
	// delta = b2 - 4*a*c
	// x1 e x2 = -b +- sqrt (delta) / 2*a
	
	 if (a != 0){
		delta = (b*b)- 4*a*c;
		    if (delta==0){
		    	raiz1 = (-b + sqrt (delta))/ (2*a);
		    	printf("\nO delta deu 0(zero)");
		    	printf("\n As raizes serao iguais a : %.2f ", raiz1);
	}else {
		if (delta > 0 ){
			raiz1 = (-b + sqrt (delta))/ (2*a);
			raiz2 = (-b - sqrt (delta))/ (2*a);
			
			printf("\nO delta eh MAIOR que 0(zero)!");
			printf("\nA primeira raiz eh igual a: %.2f",raiz1);
			printf("\nA segunda raiz eh igual a: %.2f",raiz2);
			
	}else { 
	    printf("\nDelta menor que 0(zero)!\n");
	    printf("\nNao existe raizes Reais!!");
		}
		
	}
	}else {
		printf("\nEssa nao eh uma equacao do segundo grau!");
		printf("\nTente novamente!");
		printf ("\nMas dessa vez experimente adotar um valor para A diferente de 0");
	}
}
