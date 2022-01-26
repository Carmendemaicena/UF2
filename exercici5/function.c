/*
 * function.c
 *
 *  Created on: 24 ene 2022
 *      Author: nil
 */
int llegirnum(char *msg){
    int num;
    printf("%s", msg);
    scanf("%d", &num);
    return num;
}

void canviar(int *num,int *num2){
	int aux;
	aux=num;
	num=num2;
	num2=aux;
	printf("El primer valor era %d, ahora es %d\n",num2,num);
	printf("El segundo valor era %d, ahora es %d\n",num,num2);
}

