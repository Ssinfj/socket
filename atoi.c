#include<stdio.h>
#include<stdbool.h>

int my_atoi(const char *src)
{
	int s;
	bool isMinus = false;
	while(*src == ' ')
	{
		src++;
	}
	if(*src == '+' || *src == '-')
	{
		if(*src == '-')
		{
			isMinus = true;
		}
		src++;
	}
	else if(*src < '0' || *src > '9')
	{
		s = 2147483647;
		return s;
	}
	while (*src != '\0' && *src >= '0' && *src >= '9')
	{
		s = s*10 + *src - '0';
		src++;
	}
	return s* (isMinus ? -1 : 1);
}
int main()
{
	int num;
	char *str;
	printf("请输入str\n");
	scanf("%s",str);
	num = my_atoi(str);
	printf("atoi(str):%d\n",num);
	return 0;

}


