#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char breaker;
	int knownbreaker = 0;
	for (breaker = 'A'; breaker <= 'D'; breaker++)
	{
		int asaid = (breaker != 'B') + (breaker == 'D') == 2 || (breaker != 'B') + (breaker == 'D') == 0;
		int bsaid = (breaker != 'B') + (breaker == 'C') == 2 || (breaker != 'B') + (breaker == 'C') == 0;
		int csaid = (breaker != 'A') + (breaker == 'B') == 2 || (breaker != 'A') + (breaker == 'B') == 0;
		int dsaid = (breaker != 'D');
		if (asaid + bsaid + csaid + dsaid == 4)
		{
			knownbreaker = breaker - 'A' + 1;
			break;
		}
	}
		switch (knownbreaker)
		{
		case 1:
			printf("��ƿ�Ǽ״����");
			break;
		case 2:
			printf("��ƿ���Ҵ����");
			break;
		case 3:
			printf("��ƿ�Ǳ������");
			break;
		case 4:
			printf("��ƿ�Ƕ������");
			break;
		}
			
	  

	
}