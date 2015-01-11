#include <stdio.h>
int main()	{
	int n,i,j,t,a[32],b[32];
	scanf("%d",&n);
	while(n--)	{
		scanf("%d%d",&i,&j);
		for(t=0;t<32;++t)
			a[t]=b[t]=0;
		for(t=0;i>0;++t)	{
			a[t]=i;
			i/=2;
		}
		for(t=0;j>0;++t)	{
			b[t]=j;
			j/=2;
		}
		for(i=0;a[i]>0;++i)
			for(j=0;b[j]>0;++j)
				if(a[i]==b[j])
					goto p;
		p:	printf("%d\n",i+j);
	}
	return 0;
}