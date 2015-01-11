#include <stdio.h>
int main()	{
	int t,m,n,i,p;
	scanf("%d",&t);
	while(t--)	{
		scanf("%d%d",&n,&m);
		int a[n];
		for(i=0;i<n;++i)
			a[i]=0;
		for(i=0;i<m;++i)	{
			scanf("%d",&p);
			a[p-1]=1;
		}
		for(i=p=0;i<n;++i)
			if(a[i]==0)	{
				if((p&1)==0)
					printf("%d ",i+1);
				p++;
			}
		printf("\n");
		for(i=p=0;i<n;++i)
			if(a[i]==0)	{
				if((p&1)==1)
					printf("%d ",i+1);
				p++;
			}
		printf("\n");
	}
	return 0;
}