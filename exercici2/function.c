/*
 * function.c
 *
 *  Created on: Jan 19, 2022
 *      Author: admin-pg
 */
float validate(){
	float num;
	do{
		printf("Introduce un valor natural:\n");
		scanf("%f",&num);
	}while (num<1);
	return num;
}
void calculate(float num1){
	printf("%.2f segundos es igual a %f minutos\n",num1,num1/60);
	printf("%.2f segundos es igual a %f horas\n",num1,num1/3600);
	printf("%.2f segundos es igual a %f dias\n",num1,num1/86400);
}
