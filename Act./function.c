/*
 * function.c
 *
 *  Created on: Jan 18, 2022
 *      Author: usuari
 */
int validate(){
	int num;
	do{
		printf("Pon un valor dentro de los parámetros: \n");
		scanf("%d",&num);
	}while(num<1);
	return num;
}
int calculate(int num1){
	int i,count=0;
	for (i=1;i<=num1;i++){
		if (num1%i==0){
			count++;
		}
	}
	return count;
}
void imprimir(int num1){
	if (num1==2 || num1==1){
		printf("Efectivamente mi estimado, se trata de un número primo");
	}
	else{
		printf("Efectivamente mi estimado, NO se trata de un número primo");
	}
}
