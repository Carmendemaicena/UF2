/*
 * main.c
 *
 *  Created on: 2 feb 2022
 *      Author: nil
 */
#include <stdio.h>
#include <stdlib.h>
#include "function.h"

void main(){
	int num;
	num = llegirnum(TEXT);
    struct biblio lib[num];
    modifydata(lib,num);
    printdata(lib,num);
}

