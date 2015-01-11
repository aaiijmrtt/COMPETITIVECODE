#include <stdio.h>
int main()	{
	int t,n,i,v,c;
	short int a[10000];
	scanf("%d",&t);
	while(t--)	{
		scanf("%d",&n);
		for(i=0;i<10000;++i)
			a[i]=0;
		for(i=0;i<n;++i)	{
			scanf("%d",&v);
			a[v-1]++;
		}
		for(i=v=c=0;i<10000;++i)
			if(a[i]>c)	{
				v=i+1;
				c=a[i];
			}
		printf("%d %d\n",v,c);
	}
	return 0;
}