#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int answer = 59 ; 
    int num ;
    int trial=0;
    
    do 
    {
        printf("input a number : ");
        scanf("%d",&num);
        
        if (num<answer)
        {
                       printf("Low!\n");
                       trial=trial+1;
                       }
        else if (num>answer)
        {
             printf("High!\n");
             trial=trial+1;
             }
        
    }
    while(num!=answer);
    printf("congraturation! \n");
    printf("Your trial number is %i",trial);
  system("PAUSE");	
  return 0;
}
