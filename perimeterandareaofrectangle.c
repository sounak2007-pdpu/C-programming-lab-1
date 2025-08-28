#include <stdio.h>
int main(){
float l,b;
printf("enter the value\n");
scanf("%f %f",&l,&b);
printf("the perimeter of rectangle is %f",2*(l+b));
printf("the area of rectangle is %f",l*b);
return 0;
}