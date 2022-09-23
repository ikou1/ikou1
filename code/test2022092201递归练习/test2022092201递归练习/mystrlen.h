#define  _CRT_SECURE_NO_WARNINGS 1
int mystrlen(char* a1)
{
	if (*a1 != '\0')
		return (1 + mystrlen(a1 + 1));
	else
		return 0;
}
