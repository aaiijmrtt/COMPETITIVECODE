#include <stdio.h>
int main()	{
	int t,n,c,a,i;
	scanf("%d",&t);
	while(t--)	{
		scanf("%d%d",&n,&c);
		for(i=0;i<n;++i)	{
			scanf("%d",&a);
			c-=a;
		}
		if(c<0)
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}