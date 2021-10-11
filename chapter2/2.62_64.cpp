#include <cstdio>

//2.62其实直接令x=-1就好，-1的补码就是全1。
int int_shifts_arithmetic()
{
	int x = 0x00;
	x = ~x;
	return ((x >> 3) == x);
}
//2.63
unsigned srl(unsigned int x, int k)
{
	unsigned xsra = (int)x >> k;	//有点不明白为啥要强制类型转换
	int w = 8 * sizeof(int);
	int mask = (int)-1 << (w - k);	//左移
	return xsra & ~mask;
}

unsigned sra(unsigned x, int k)
{
	int xsrl = (unsigned)x >> k;
	int w = sizeof(int) << 3;
	int mask = (int)-1 << (w - k);
	//let mask remain unchanged when the first bit of x is 1, otherwise 0.
	int m = 1 << (w - 1);
	mask &= !(x & m) - 1;	//注意是！不是~，不是按位取反，而是1或0；
	return xsrl | mask;
}

//2.64 从左往右数，第一位算有效数字
int any_odd_one(__int32_t x)
{
	return !!(0xAAAAAAAA & x);
}
int main()
{
    
    return 0;
}
