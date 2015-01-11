#include <stdio.h>
int main()	{
	int t,p,i,m,a[12]={2048,1024,512,256,128,64,32,16,8,4,2,1};
	scanf("%d",&t);
	while(t--)	{
		scanf("%d",&p);
		for(i=m=0;i<12;++i)	{
			m+=p/a[i];
			p-=a[i]*(p/a[i]);
		}
		printf("%d\n",m);
	}
	return 0;
}