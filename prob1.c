#include <stdio.h>
#include <stdlib.h>

 float Get_max(float a, float b){
  float max;
   if(a>b || a==b){
     max=a;
   }
  else {
        max=b;
   }

  return max;
 }
int main()
{ float num1,num2,maximum;
    printf("Enter the two numbers: ");
    scanf("%f\n%f",&num1,&num2);
    maximum= Get_max(num1,num2);
    printf("\nThe maximum value is %.1f",maximum);

    return 0;
}
