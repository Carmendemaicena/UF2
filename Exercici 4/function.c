/*
 * function.c
 *
 *  Created on: Jan 18, 2022
 *      Author: usuari
 */
void validate(){
	float num,apr=0,sus=0;
	int count1=0,count2=0;
	for(int i=0;i<15;i++){
	do{
		printf("Pon un valor dentro de los parámetros: \n");
		scanf("%f",&num);
	}while(num<0 || num>10);
		if(num>=5){
			apr+=num;
			count1++;
		}
		else{
			sus+=num;
			count2++;
		}
	}
	printf("El total de aprovados es de %d\n",count1);
	printf("El total de suspendidos es de %d\n",count2);
	printf("La media de los aprovados es de %.2f\n",apr/count1);
	printf("La media de los suspendidos es de %.2f\n",sus/count2);
}

