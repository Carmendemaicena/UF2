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
	num = validacio();
	num2 = binari(num);
	printf("El número en binari és ");
	printf("%d", num2);
}
