#include <stdio.h>
int main (){
float p,r,n;
printf("enter values\n");
scanf("%f %f %f",&p,&r,&n);
printf("their simple interest is %f\n",p*n*r/100);
return 0;
}