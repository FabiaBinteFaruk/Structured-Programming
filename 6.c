#include<stdio.h>
int main(){
int a,b,temp; //a=5,b=6
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("%d %d",a,b);
return 0;
}
