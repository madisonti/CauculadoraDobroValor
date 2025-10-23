#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale>


int main(){
	
	setlocale( LC_ALL, ".utf-8" );
	float dobro, numero, valor = 2;
	
	 printf("digite o seu  numero para  vericar o seu  dobro ");
	  scanf("%f",&numero);
	  
	   numero=(valor * numero);
	  
	  printf("o dobro de %f",numero,"É %f",dobro);	
	
	
}
