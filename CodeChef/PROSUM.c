#include <stdio.h>
int main()	{
	int t,n,c,i;
	long long int a,b;
	scanf("%d",&t);
	while(t--)	{
		scanf("%d",&n);
		for(i=a=b=0;i<n;++i)	{
			scanf("%d",&c);
			if(c==2)
				a++;
			else if(c>2)
				b++;
		}
		printf("%lld\n",(b*a+b*(b-1)/2));
	}
	return 0;
}