/*
 * function.h
 *
 *  Created on: 2 feb 2022
 *      Author: nil
 */
#ifndef FUNCTION_H_
#define FUNCTION_H_
#define TEXT "Cuántos libros deseas pedir?:\n"
#define TEXT1 "Indica el título del libro:\n"
#define TEXT2 "Indica el/la autor/a del libro:\n"
#define TEXT3 "Indica el editorial del libro:\n"
#define TEXT4 "Indica el día del préstamo(número entero):\n"
#define TEXT5 "Indica el mes del préstamo(número entero):\n"
#define TEXT6 "Indica el año del préstamo(número entero):\n"
#define TEXT7 "Indica la cantidad disponible que queda del libro(número entero):\n"
#define TEXT8 "Indica el usuario que ha tenido el préstamo del libro:\n"
#define TEXT9 "Indica los días que van a tener prestado el libro(número entero):\n"
struct date{
	int dia;
	int mes;
	int year;
};
struct biblio{
    char title[30];
    char autor[20];
    char editorial[20];
    struct date time;
    int units;
    char usuari[20];
    int prestec;
};
int llegirnum(char *);
void modifydata(struct biblio *,int);
void printdata(struct biblio *,int);
#endif /* FUNCTION_H_ */


