//PR1_Q3 :- Write C programe to find the third angle of triangle if two oter angles are given.

#include<stdio.h>
#include<conio.h>

void main(){

int A,B,C;

clrscr();

printf("First angle:");
scanf("%d",&A);

printf("Second angle:");
scanf("%d",&B);

C = 180 - (A+B);

printf("Third angle:%d",C);

getch();

 }