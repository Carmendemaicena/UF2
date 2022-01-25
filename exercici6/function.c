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
void calculate(int num){
	int i=0,res=0,aux;
	while (res<=num){
		res+=i;
		i++;
		if(res>num){
			aux=res-i;
			i--;
		}
	}
	printf("%d\n",i);
	printf("%d\n",aux);
	}

