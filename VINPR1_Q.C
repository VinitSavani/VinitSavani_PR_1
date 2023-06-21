//PR1_Q1:- Write a programe to convert temprature frome degrees celcious to fahrenheit.

#include<stdio.h>
#include<conio.h>

void main(){

float C,F;

clrscr();

printf("The temprature in celcious :- ");
scanf("%f",&C);

F = (C*9/5)+32;

printf("The temprature in Fahrenheit :- %0.1f",F);

getch();

}