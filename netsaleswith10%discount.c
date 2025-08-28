#include <stdio.h>
int main(){
float n;
printf("enter the value\n");
scanf("%f",&n);
printf("the net sales with 10 percent discount is %f",n-(0.10*n));
return 0;
}