#include <stdio.h>
int main()	{
	int t;
	scanf("%d",&t);
	while(t--)	{
		int n,w,i,v;
		scanf("%d",&n);
		for(i=v=0;i<n;++i)	{
			scanf("%d",&w);
			if(w+i>v)
				v=w+i;
		}
		printf("%d\n",v);
	}
	return 0;
}