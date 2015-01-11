#include<stdio.h>
int main()	{
	long long int a;
	scanf("%lld",&a);
	switch(a%6)	{
		case 0:
		case 1:
		case 3:	printf("yes\n");
				break;
		default:printf("no\n");
	}
	return 0;
}