#include <stdio.h>
#include <stdlib.h>
int x=30,y=10;


void swap(int *ptr1,int *ptr2){

   *ptr1=10;
   *ptr2=30;
}
 int main()
{
    printf("Before swapping x=%d,y=%d\n",x,y);
    swap(&x,&y);
    printf("After swapping x=%d,y=%d",x,y);
    return 0;
}
/*void swap2(int a, int b){
       a=a^b;
       b=a^b;
       a=a^b;
   printf("The new values is\n x=%d\n y=%d",a,b);
 }
  int main()
{
    swap2(x,y);

    return 0;
}
*/
