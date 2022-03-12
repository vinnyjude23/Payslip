

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main ( )

{

 int Kra_pin,taxpaid,payrate,count=1 ,ot=0;
 int working_hours,employee_no;
 int days_work=0;
 int hours;
 float Normalpay;
  double overtimehours = hours - 40;
  double overtimepay = Normalpay * 1.5;
 float rate_per_day=0.00;
 char employee_name[200];




 printf("\tEmployees Payroll System c");
 printf("n\n");
printf("Enter employee_name   : ");
gets(employee_name);
printf("\tGive number of Days Work: ");
scanf("%d",&days_work);
printf("\tGive rate_per_day    :");
scanf("%f",&rate_per_day);
printf("Enter Kra _pin");
scanf("%d",&Kra_pin);

printf("Enter working_hours :");
scanf("%d",&working_hours);

Normalpay=(days_work * rate_per_day);
printf("n\n");
if (hours <= 40)
    printf("This means your Normalpay is %1f . \n", Normalpay);
overtimepay=(payrate * Normalpay);
scanf("%d",&overtimepay);

printf("n\n");
printf("\tEmployees Name :%s\n",employee_name);
printf("\tEmployees Normalpay:%2.2f\n",Normalpay);
printf("n\n");
printf("\tEnd of the Program");



return 0;
}




