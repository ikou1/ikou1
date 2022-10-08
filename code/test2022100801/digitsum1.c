#define  _CRT_SECURE_NO_WARNINGS 1
int digitsum1(int n)
{
	
	if (n <= 9)
	{
		return n;
	}
	return (n % 10 + digitsum1(n/10));
}