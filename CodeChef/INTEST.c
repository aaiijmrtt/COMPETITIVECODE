#include <stdio.h>
int main()	{
	int n,k,m,c=0;
	scanf("%d%d",&n,&k);
	while(n--)	{
		scanf("%d",&m);
		if(m%k==0)
			c++;
	}
	printf("%d",c);
	return 0;
}