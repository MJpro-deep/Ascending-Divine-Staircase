#include<stdio.h>
int main() {
int a,b,c,d,e,f,h,g,i;
scanf("%d %d",&a,&b);
i=a/100;
c=a%100;
d=i*60+c;
e=d+b;
f=e/60;
g=e%60;
h=f*100+g;
printf("%d\n",h);
return 0;
}