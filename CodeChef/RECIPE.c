#include <stdio.h>
int gcd(int a,int b)	{
	if(b<a)	{
		a+=b;
		b=a-b;
		a-=b;
	}
	int i;
	for(i=1;i<=a/2;++i)
		if((a%i==0)&&((b*i)%a==0))
			return a/i;
	return 1;
}
int main()	{
	int t,n,i,g;
	scanf("%d",&t);
	while(t--)	{
		scanf("%d",&n);
		int a[n];
		scanf("%d",&a[0]);
		g=a[0];
		for(i=1;i<n;++i)	{
			scanf("%d",&a[i]);
			g=gcd(g,a[i]);
		}
		for(i=0;i<n;++i)
			printf("%d ",a[i]/g);
		printf("\n");
	}
	return 0;
}