#include<stdio.h>

int main(){
	
	int i,j,tope,cont;
	
	printf("\nPrograma para mostrar los numeros primos hasta N numero\n");
	printf("\nIngrese hasta que numero quiere que se muestren los primos\n");
	scanf("%i",&tope);
	
	printf("\nLos numeros primos hasta %i son: \n",tope);
	
	for(i=2; i<=tope; i++){   //Avanza entre los numeros
		
		cont=0;
		for(j=2; j<i; j++){  //Avanza entre los numeros para dividir
			
			if(i%j==0){
				cont = cont+1;
				break;  //Lo detengo porque ya hay por lo menos un residuo=0 entonces ya no es primo
			}
		}
		
		if(cont==0)  //Esto me verifica que es primo y lo imprime
			printf("\n\t%i\n",i);
	}
	
}
