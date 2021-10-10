
#include<stdio.h>
typedef  char * byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
	size_t i;
	for (int i = 0; i < len; i++)
	{
		printf(" %.2x", start[i]);
	}
	printf("\n");
}
int main()
{
	char * str = "sunjian";

	show_bytes(str, 7);
	return 0;
}
