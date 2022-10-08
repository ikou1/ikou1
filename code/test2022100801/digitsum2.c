#define  _CRT_SECURE_NO_WARNINGS 1
int digitsum2(int n)
{
	int sum = 0;
	if (n / 10 == 0)
	{
		return n;
	}
	while (n >= 10)
	{
		sum += n % 10;
		n=n / 10;
	}
	sum = sum + n;
	return sum;
}