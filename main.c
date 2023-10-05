#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    printf("정수를 입력하세요 : \n");
    scanf("%i",&x);
    if (x<0)
    {
            x= -x;
            printf("절대값은 %i 입니다.\n",x);
    }
    else
    {
        printf("절대값은 %i 입니다.\n",x);
    }
  system("PAUSE");	
  return 0;
}
