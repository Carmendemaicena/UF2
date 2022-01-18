/*
 * funciones.c
 *
 *  Created on: Jan 14, 2022
 *      Author: usuari
 */
int validate(){
	int num;
	do{
		printf("Introduce un número natural:\n");
		scanf("%d",&num);
	}while(num<1);
	return num;
}
int calculate(int num1){
	int a=0,i;
	for (i=1;i<=num1;i++){
		if(num1%i==0){
			a++;
		}
	}
	return a;
}
void imprimir(int num2){
	if(num2==2 || num2==1){
		printf("El número es primo\n");
	}
	else{
		printf("El número no es primo\n");
	}
}
