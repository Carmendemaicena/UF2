/*
 * main.c
 *
 *  Created on: 24 ene 2022
 *      Author: nil
 */

#include <stdio.h>
#include "function.h"

void main(){
	int num;
	num = llegirnum("Coloca el valor:\n");
	calculate(num);
}
