#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    printf("������ �Է��ϼ��� : "); 
    scanf("%i",&x);
    if (x<0)
    {
            printf("%i�� �����Դϴ�. \n",x);
    }
    else if (x>0)
    {
         printf("%i�� ����Դϴ�. \n",x);
    } 
    else
    {
        printf("0�Դϴ�. \n"); 
    }
  system("PAUSE");	
  return 0;
}
