#include <stdio.h>
#include <stdlib.h>
int digits_num(int num){
    int counter=0;
    if(num==0){
        counter=1;
        return counter;5
    }
    else{
    while(num!=0){
        num=num/10;
        counter++;
    }
    return counter;
}}





int main()
{  int num,digits;
    printf("Enter an integar:\n");
    scanf("%d",&num);
    digits= digits_num(num);
    printf("number of digits is %d",digits);
    return 0;
}
