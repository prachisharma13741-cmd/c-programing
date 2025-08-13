#include<stdio.h>
int main() {
int num1,num2,sum,sub, prod, div ;
printf("Enter two number \n ");
scanf("%d %d",&num1, &num2);
sum=num1+num2;
printf("this is the sum: %d/n", sum);
sub=num1-num2 ;
printf("subtraction if %d and %d= %d\n", num1,num2,sub);
prod=num1*num2 ;
printf("multiple if %d and %d= %d\n", num1,num2,prod);
div=num1/num2 ;
printf("divide if %d and %d= %d\n", num1,num2,div);

}
