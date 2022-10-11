#define  _CRT_SECURE_NO_WARNINGS 1
int trans10k(n, k)
{
	if (n < k)
	{
		return n;
	}
	return n % k + 10 * trans10k(n / 10, k);
}