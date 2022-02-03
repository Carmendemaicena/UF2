/*
 * function.c
 *
 *  Created on: 2 feb 2022
 *      Author: nil
 */
#include "function.h"
#define SIZE 100
void trobar(int *vector){
	printf("[");
	for(int i=1;i<SIZE;i++){
		if(i%2==0 && i!=SIZE-2){
			printf("%d,",i);
		}
		else if(i%2==0 && i==SIZE-2){
			printf("%d]",i);
		}
	}
}


