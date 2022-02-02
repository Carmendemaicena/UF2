/*
 * main.c
 *
 *  Created on: 24 ene 2022
 *      Author: nil
 */

#include <stdio.h>
#include <stdlib.h>
#include "function.h"

void main(){
	int num;
	num = llegirnum("Coloca el tamany de l'array:\n");
	int vector[num];
	getvalues(vector,num);
	calculate(vector,num);
	ordenar(vector,num);
}
