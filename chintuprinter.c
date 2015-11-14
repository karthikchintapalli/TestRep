#include <stdio.h>

int main(int argc, char *argv[])
{
	if(argc == 1) printf("chintu!!!!!!!!");
	else
	{
		int num = 0, i;
		for(i = 0; argv[1][i] != '\0'; i++)
		{
			if(argv[1][i] < '0' || '9' < argv[1][i])
			{
				printf("Usage: %s [excitement-level]\n(if not specified, excitement-level = 8)\n", argv[0])
				return 1;
			}
			num = 10*num + (argv[1][i] - '0');
		}
		printf("chintu");
		for(i = 0; i < num; i++) printf("!");
		printf("\n");
	}
	return 0;
}
