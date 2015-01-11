#include <stdio.h>
#include <math.h>
int main()	{
	int n,a,b,i,j,k;
	scanf("%d",&n);
	do	{
		a=n;
		b=0;
		while(a>b)	{
			b=b*10+a%10;
			a/=10;
		}
		if((a==b)||(a==b/10))	{
			a=2;
			b=sqrt(n);
			if(n%a==0)
				continue;
			a++;
			while(a<=b)	{
				if(n%a==0)
					break;
				a+=2;
			}
			if(a<=b)
				continue;
			else
				break;
		}
	}	while(n++)	;
	printf("%d",n);
	return 0;
}