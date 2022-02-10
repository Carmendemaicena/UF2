/*
 * function.c
 *
 *  Created on: 10 feb 2022
 *      Author: nil
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void omplir(int num, int min, int max, int *vector){
	int i;
	srand(time(NULL));
	for (i=0;i<num;i++){
		vector[i] = min + rand() % (max +1 - min) ;
	}
}
void findnum(int num,int *vector,char *msg,char *msg1,char *msg2){
	int i=0,found=0,to_find;
	printf("%s",msg);
	scanf("%d",&to_find);
	while(i<num && found==0){
		if(vector[i]==to_find){
			found=1;
		}
		i++;
	}
	if(found==1){
		printf("%s",msg1);
	}
	else{
		printf("%s",msg2);
	}
}
void printvector(int num, int *vector){
	printf("[");
	for(int i=0;i<num;i++){
		if(i!=num-1){
			printf("%d,",vector[i]);
		}
		else{
			printf("%d]",vector[i]);
		}
	}
}
