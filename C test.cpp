#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	char colorInput[] = "";
	char color[] = {0};
	int index = 0;
	int red_num = 0;
	int black_num = 0;
	int host_money = 0;
	printf("enter your color and money. If you are all done, press anything except red, and black.\n");
	while(1)
	{
		printf(": ");
		scanf("%s", &colorInput);
		if(strcmp(colorInput, "red") == 0)
		{
			color[index] = 0;
			index += 1;
		}
		else if(strcmp(colorInput, "black") == 0)
		{
			color[index] = 1;
			index += 1;
		}
		else
		{
			break;
		}
	}
	for(int i = 0; i < sizeof(color)/sizeof(color[1]); i ++)
	{
		if(color[i] == 1)
		{
			black_num += 1;
		}
		else if(color[i] == 0)
		{
			red_num += 1;
		}
	}
	if(red_num > black_num)
	{
		printf("Answer is black!\n");
		printf("host money is %d", red_num - black_num);
	}
	else
	{
		printf("Answer is red!\n");
		printf("host money is %d", black_num - red_num);
	}
	return 0;
}
