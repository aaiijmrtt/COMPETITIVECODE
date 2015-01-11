#include <stdio.h>
#include <limits.h>
int main()	{
	int t,n,m,s,c,i;
	scanf("%d",&t);
	while(t--)	{
		scanf("%d",&n);
		for(i=c=0,m=INT_MAX;i<n;++i)	{
			scanf("%d",&s);
			if(s<=m)	{
				m=s;
				c++;
			}
		}
		printf("%d\n",c);
	}
	return 0;
}