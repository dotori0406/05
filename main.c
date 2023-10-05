#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    printf("정수를 입력하세요 : "); 
    scanf("%i",&x);
    if (x<0)
    {
            printf("%i는 음수입니다. \n",x);
    }
    else if (x>0)
    {
         printf("%i는 양수입니다. \n",x);
    } 
    else
    {
        printf("0입니다. \n"); 
    }
  system("PAUSE");	
  return 0;
}
