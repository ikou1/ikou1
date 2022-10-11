#define  _CRT_SECURE_NO_WARNINGS 1
int transk10( int n,int k)
{
	if (n < k)
		return n;
	return (n % 10) + k * transk10(n / 10, k);
}
