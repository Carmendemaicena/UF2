/*
 * main.c
 *
 *  Created on: 24 ene 2022
 *      Author: nil
 */

#include <stdio.h>
#include "function.h"

void main(){
	int num, num2;
	num = llegirnum("Coloca el primer valor:\n");
	num2 = llegirnum("Coloca el segundo valor:\n");
	canviar(&num,&num2);
}
