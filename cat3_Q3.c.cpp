//c Arrays-3D
#include<stdio.h>
#include<string.h>
int main(){
int hours_worked;
int hourly_wage;
int overtime_hours;
int overtime_pay;
float regular_pay;
float gross_pay;
float taxes;
float net_pay;
 printf("Enter the hours worked:\n");
 scanf("%d", &hours_worked);
 printf("Enter the hourly wage:\n");
 scanf("%d",&hourly_wage);
 
 if(hours_worked<=40){
 regular_pay=hours_worked*hourly_wage;
 }
 else{
 overtime_hours=hours_worked-40;
 overtime_pay=overtime_hours*hourly_wage*15;
 regular_pay=hours_worked*hourly_wage;
 }
 gross_pay=overtime_pay+regular_pay;
 if(gross_pay<=600){
 taxes=gross_pay*0.15;
 }
 else{
 taxes=600*0.15+(gross_pay-600)*0.20;
 }
 net_pay=gross_pay-taxes;
 
 printf("gross pay:%.2f\n", gross_pay);
 printf("taxes:%.2f\n",taxes);
 printf("net pay:%.2f\n",net_pay);
	return 0;
} 
    