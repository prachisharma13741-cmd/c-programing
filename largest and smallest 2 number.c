#include<stdio.h>
void main() {
int a,b;
printf("Enter two numbers \n");
scanf("%d%d",&a,&b);
if (a>b){
printf("%d is the largest,",a);
printf("%d is the smallest",b);
}
else {

printf("%d is the largest,",b);
printf("%d is the smallest",a);
}

}
