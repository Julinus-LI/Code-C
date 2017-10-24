#include<stdio.h>
int main(void)
{
	int number, n, j;
   //穷举法；
	for (number = 1; number < 6; number++)   //对1--5之间的数进行穷举；
	{
		for (n = 1; n < 4; n++)    //对1--3之间的数进行穷举；
		{
			//if判断是否满足题中的条件；
			if ((6 * n + 4 * number == 26) && (number*(number + n)*(number + 2 * n)*(number + 3 * n))==880)
			{
				printf("结果是：\n");
				for (j = 1; j <= 20; j++)
				{
					printf("%3d",number);
					number += n;
					if (j % 5 == 0)    //输出每5个换一行；
						printf("\n");
				}
			}
		}
	}
	return 0;
}
