#include <cstdio>

//2.62��ʵֱ����x=-1�ͺã�-1�Ĳ������ȫ1��
int int_shifts_arithmetic()
{
	int x = 0x00;
	x = ~x;
	return ((x >> 3) == x);
}
//2.63
unsigned srl(unsigned int x, int k)
{
	unsigned xsra = (int)x >> k;	//�е㲻����ΪɶҪǿ������ת��
	int w = 8 * sizeof(int);
	int mask = (int)-1 << (w - k);	//����
	return xsra & ~mask;
}

unsigned sra(unsigned x, int k)
{
	int xsrl = (unsigned)x >> k;
	int w = sizeof(int) << 3;
	int mask = (int)-1 << (w - k);
	//let mask remain unchanged when the first bit of x is 1, otherwise 0.
	int m = 1 << (w - 1);
	mask &= !(x & m) - 1;	//ע���ǣ�����~�����ǰ�λȡ��������1��0��
	return xsrl | mask;
}

//2.64 ��������������һλ����Ч����
int any_odd_one(__int32_t x)
{
	return !!(0xAAAAAAAA & x);
}
int main()
{
    
    return 0;
}