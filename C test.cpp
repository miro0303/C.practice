#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	while(1)
	{
		printf("%d\n", i);
		i += 1;
		for(int o = 0; o < 10000000; o ++)
		{
			printf("");
		}
	}
}
