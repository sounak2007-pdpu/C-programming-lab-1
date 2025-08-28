#include <stdio.h>
int main (){
float x,y,z;
printf("enter the value\n");
scanf("%f %f %f",&x,&y,&z);
printf("the net salary is %f",x+(y*0.1-z*0.03));
return 0;
}