//PR1_Q2:- Write C programe to find gross salary by adding % of HRA,DA,andTA of user choise.


#include<stdio.h>
#include<conio.h>

void main(){

int X,Y,HRA,DA,TA; //(X = Base salary)  (Y = Gross salary)

clrscr();

printf("Base salary: ");
scanf("%d",&X);

printf("HRA = ");
scanf("%d",&HRA);
HRA=(X*HRA)/100;

printf("DA = ");
scanf("%d",&DA);
DA=(X*DA)/100;

printf("TA = ");
scanf("%d",&TA);
TA=(X*TA)/100;

Y = X+HRA+DA+TA;

printf("RS.%d",Y);

getch();

}






