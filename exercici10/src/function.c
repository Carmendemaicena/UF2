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
void modifydata(struct biblio *b,int num){
	for(int i=0;i<num;i++){
	printf("%s",TEXT1);
	scanf("%s",b[i].title);
	printf("%s",TEXT2);
	scanf("%s",b[i].autor);
	printf("%s",TEXT3);
	scanf("%s",b[i].editorial);
	printf("%s",TEXT4);
	scanf("%d",&b[i].time.dia);
	printf("%s",TEXT5);
	scanf("%d",&b[i].time.mes);
	printf("%s",TEXT6);
	scanf("%d",&b[i].time.year);
	printf("%s",TEXT7);
	scanf("%d",&b[i].units);
	printf("%s",TEXT8);
	scanf("%s",b[i].usuari);
	printf("%s",TEXT9);
	scanf("%d",&b[i].prestec);
	}
}
void printdata(struct biblio *b, int num){
	for(int i=0;i<num;i++){
		printf("\n*************Libro %d******************\n", i+1);
		printf("Título del libro: %s\n", b[i].title);
		printf("Autor del libro: %s\n", b[i].autor);
		printf("Editorial del libro: %s\n", b[i].editorial);
		printf("Fecha de publicación: %d-%d-%d\n", b[i].time.dia, b[i].time.mes, b[i].time.year);
		printf("Unidades disponibles: %d\n", b[i].units);
		printf("Usuario del préstamo: %s\n", b[i].usuari);
		printf("Día(s) de préstamo: %d\n", b[i].prestec);
	}
}

