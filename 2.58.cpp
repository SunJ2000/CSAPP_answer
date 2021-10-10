#include <cstdio>

int main()
{
	__int32_t num = 0x2233;
	char * first_bytes = (char*)& num;
	if (*(first_bytes) == 0x33&&(*(first_bytes+1)=0x22))
		printf("little end");
	else printf("big end");
    
    return 0;
}