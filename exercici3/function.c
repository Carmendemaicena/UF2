/*
 * function.c
 *
 *  Created on: 24 ene 2022
 *      Author: nil
 */
int validacio(){
	int numdec;
	do{
		printf("Escriu un nombre decimal que sigui enter: ");
		scanf("%d", &numdec);
	}while (numdec<0);
	return numdec;
}


int binari(int num){
	int elevat=1 ,residu, binari=0;
	do{
		residu=num%2;
		num=num/2;
		binari=binari+residu*elevat;
		elevat=elevat*10;
	}while (num>0);
	return binari;
}

