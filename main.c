#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x;
    printf("������ �Է��ϼ��� : \n");
    scanf("%i",&x);
    if (x<0)
    {
            x= -x;
            printf("���밪�� %i �Դϴ�.\n",x);
    }
    else
    {
        printf("���밪�� %i �Դϴ�.\n",x);
    }
  system("PAUSE");	
  return 0;
}
