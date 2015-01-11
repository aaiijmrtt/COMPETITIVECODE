#include <stdio.h>
int main()	{
	int t,g,i,n,q;
	scanf("%d",&t);
	while(t--)	{
		scanf("%d",&g);
		while(g--)	{
			scanf("%d%d%d",&i,&n,&q);
			if(((i+n+q)&1)==0)
				printf("%d\n",(n+1)/2);
			else
				printf("%d\n",n-(n+1)/2);
		}
	}
	return 0;
}