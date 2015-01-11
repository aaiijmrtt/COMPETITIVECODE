#include <stdio.h>
int main()	{
	int t,n,g[1000],i,j;
	scanf("%d",&t);
	while(t--)	{
		scanf("%d",&n);
		int a[n],d[n];
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);
		for(i=0;i<n;++i)
			scanf("%d",&d[i]);
		for(i=0;i<1000;++i)
			g[i]=0;
		for(i=0;i<n;++i)
			for(j=a[i];j<d[i];++j)
				g[j-1]++;
		for(i=j=0;i<1000;++i)
			if(g[i]>j)
				j=g[i];
		printf("%d\n",j);
	}
	return 0;
}