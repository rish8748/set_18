#include<stdio.h>
void main(){
int n;
printf("enter a number \n");
scanf("%d",&n);
if(n>0)
printf("Positive");
else if(n<0)
printf("Negative");
else
printf("number is zero");

}