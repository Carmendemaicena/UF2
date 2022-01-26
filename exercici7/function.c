/*
 * function.c
 *
 *  Created on: 24 ene 2022
 *      Author: nil
 */
int llegirnum(char *msg){//función de entrada de datos
    int num;
    do{//validación de datos
    	printf("%s", msg);
    	scanf("%d", &num);
    }while(num<1 || num>50);
    return num;
}
void getvalues(int *vector,int num){//función que obtiene los valores
	int i=0;
	while (i<num){//recorrer el array
		do{//validación de que el número se encuentre entre 1 y 10
		printf("Introdueix un valor dins l'array (entre 0 i 10):\n");
		scanf("%d",&vector[i]);
		}while(vector[i]<0 || vector[i]>10);
		i++;
	}
}
void calculate(int *vector,int num){//función que calcula
	int i,sum=0,min=vector[0],max=vector[0];
	for(i=0;i<num;i++){//sumatorio para calcular la media
		sum=sum+vector[i];
	}
	printf("La media es de %d\n",sum/num);
	for(i=0;i<num;i++){//sumatorio para calcular la media
		if(max<vector[i]){
			max=vector[i];
		}
		else if(min>vector[i]){
			min=vector[i];
		}
	}
	printf("El valor màxim de l'array és: %d\n",max);
	printf("El valor mínim de l'array és: %d\n",min);
}

