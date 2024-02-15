#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int login(void){
 char correct_pass[]="rhma45$", pass[8];
  int flag=0;
  for(int i=0;i<3;i++){
        scanf("%s", pass);
    if(strcmp(pass,correct_pass)==0){
        flag++;
            break;
            }
  else{
        if(flag ==-1){
        break;
       }
  else{
    printf("Try again!\n");
       flag --;
       }
     }}
       return flag;}
int main()
{   int flag;
    printf("\t\tHello!\n\tEnter your password:\n ");
    flag = login();
    if(flag >= 0 ){
        printf("\n\tWelcome!");
    }else
    printf("\n\tAre u a theif ??");
    return 0;
}
