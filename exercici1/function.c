/*
 * function.c
 *
 *  Created on: Jan 19, 2022
 *      Author: admin-pg
 */
int validate(){
	int num,i=3;
	do{
		printf("Introduce un valor entr el 10 y el 5000, tienes %d intentos:\n");
		scanf("%d",&num);
		i--;
	}while ((num<10 || num>5000) && i>0);
	return num;
}

