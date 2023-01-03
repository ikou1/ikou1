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
			printf("花瓶是甲打碎的");
			break;
		case 2:
			printf("花瓶是乙打碎的");
			break;
		case 3:
			printf("花瓶是丙打碎的");
			break;
		case 4:
			printf("花瓶是丁打碎的");
			break;
		}
			
	  

	
}