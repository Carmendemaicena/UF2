/*
 * function.c
 *
 *  Created on: 2 feb 2022
 *      Author: nil
 */
#include "function.h"
#include <stdio.h>
int llegirnum(char *msg){//función de entrada de datos
    int num;
    do{//validación de datos
    	printf("%s", msg);
    	scanf("%d", &num);
    }while(num<1 || num>50);
    return num;
}
void omplir(int *vector,int num){
	for(int i=0;i<num;i++){
		printf("Introduce un valor para el array:\n");
		scanf("%d",&vector[i]);
	}
}
void ordenar(int *vector,int num){
	int i,j,aux;
	for(i=0;i<num-1;i++){
		for(j=i+1;j<num;j++){
			if (vector[i] < vector[j]) {
			    aux = vector[i];
			    vector[i] = vector[j];
			    vector[j] = aux;
			  }
		}
	}
	 printf("El array en orden descendente es: [");
	 for (int i = 0; i < num;i++) {
	 	if(i!=num-1){
	     	printf("%d,",vector[i]);
	    	}
	    	else{
	        	printf("%d",vector[i]);
	    	}
	  }
	  printf("]");
	}


