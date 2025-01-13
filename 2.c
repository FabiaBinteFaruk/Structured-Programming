#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a1=n/100;
int a2=(n/10)%10;
int a3= n%10;
int sum=a1+a2+a3;
printf("%d",sum);
return 0;
}
