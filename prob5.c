#include <stdio.h>
#include <stdlib.h>
/*fibonacci series is 0,1,1,2,3,5,...
 so if we start from the 3th number it means that the current num is 1 and the previous num also is 1, so this is the algorithm
 to start the code*/
 int fibonacci(int num){
 int previous=1,current=1,count=0;
 if(num<=0){
    return 0;
 }
  else if(num==1|| num==2)
 {
  return 1;
 }
 else{

 for(int i=3;i<=num;i++){
       count=current;
    current=current+previous;
       previous=count;

 }
  return current;
 }}
int main()
{ int num,result;
    printf("Enter a number: \n");
    scanf("%d",&num);
    result = fibonacci(num);
    printf("The fibonacci of %d is %d",num,result);
    return 0;
}
