#include <cstdio>

//2.60
unsigned replace_bytes(unsigned x, int i, unsigned char b)
{
	int f = 0xff;
	unsigned a = unsigned(b);
	a=a << (i<<3);
	f=f << (i<<3);
	return ((x & ~f) | a);

}


int main()
{
	//2.61   ����취��ѡ���е����ֱ�Ϊȫ0��ȫ1��Ȼ��ֱ��!��~��,
	//A: !~X   B:!X		C: !~(x | ~0xff)	D:!((x >> ((sizeof(int) - 1) << 3)) & 0xff)
	int x = 0xCf;
	printf("%0x", !~(x | ~0xff));
    return 0;
}