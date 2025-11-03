/*Coleen Nicolette Kanyanya

PA106/G/28764/25

A programme that calculates the net pay*/

#include<stdio.h>

int main(){

float hoursWorked,hourlyWage,grossPay,Taxes,NetPay,NormalPay;

printf("What are the hours you worked this week :\n");
scanf("%f",&hoursWorked);

printf("What is your hourly wage :");
scanf("%f",&hourlyWage);

NormalPay=hourlyWage*hoursWorked;

if(hoursWorked > 40){
    grossPay=1.5*NormalPay;}
else{grossPay = NormalPay;}


if(grossPay < 600 ){Taxes = 0.15 * grossPay;}
else{Taxes = (0.15 * 600 )+ 0.2*(grossPay-600) ;}

NetPay=grossPay-Taxes;

printf("Your gross pay is %0.2f",grossPay);
printf("Your taxes are %0.2f",Taxes);
printf("Your net pay is %0.2f",NetPay);

return 0;
}

