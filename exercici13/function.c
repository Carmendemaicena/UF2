/*
 * function.c
 *
 *  Created on: 2 feb 2022
 *      Author: nil
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"

int valint(char *msg, int ini, int fin) {

	int number;

	if (fin == NULL) {

		do {
			printf(msg);
			scanf("%d", &number);
		} while (number < ini);

	} else if (ini == NULL) {

		do {
			printf(msg);
			scanf("%d", &number);
		} while (number > fin);

	} else if (ini != NULL && fin != NULL) {

		do {
			printf(msg);
			scanf("%d", &number);
		} while (number < ini || number > fin);

	} else {

		printf(msg);
		scanf("%d", &number);

	}
	return number;
}

void omplir(int *number, int size, int ini, int fin) {

	int i;
	srand(time(NULL));
	for (i = 0; i < size; i++) {
		number[i] = ini + rand() % (fin + 1 - ini);
	}
}

void order_des(int *number, int size) {

	int i, j, aux;

	for (i = 0; i < size; i++) {
		for (j = i + 1; j < size; j++) {
			if (number[j] > number[i]) {
				aux = number[i];
				number[i] = number[j];
				number[j] = aux;
			}

		}
	}
}

void order_asc(int *number, int size) {

	int i, j, aux;

	for (i = 0; i < size; i++) {
		for (j = i + 1; j < size; j++) {
			if (number[j] < number[i]) {
				aux = number[i];
				number[i] = number[j];
				number[j] = aux;
			}

		}
	}
}

int cercar(int *number, int size, int aux2) {

	int i, trobat = 0;

	for (i = 0; (i < size) && (trobat == 0); i++) {
		if (number[i] == aux2) {
			trobat = 1;
		}
	}
	return trobat;
}

void mostrar(int *number, int size) {

	int i;
	printf("\n  [");
	for (i = 0; i < size; i++) {
		if(i % 10 == 0 && i != 0){
			printf("\n  ");
		}
		if (i != size - 1) {
			printf("%d,", number[i]);
		} else {
			printf("%d", number[i]);
		}
	}
	printf("]");
}


