/*
 * main.c
 *
 *  Created on: 2 feb 2022
 *      Author: nil
 */
#include <stdio.h>
#include <stdlib.h>
#include "function.h"
#include <time.h>

void main(){
	int vector[10];
	omplir(10,15,200,vector);
	findnum(10,vector,MSG,MSG1,MSG2);
	printvector(10,vector);
}
