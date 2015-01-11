#include <stdio.h>
int ones(int n)	{
	int b=0;
	for(;n>0;n>>=1)
		b+=n&1;
	return b;
}
int main()	{
	int t,n,a,b,p[31]={1},i,x;
	for(i=1;i<31;++i)
		p[i]=p[i-1]<<1;
	scanf("%d",&t);
	while(t--)	{
		scanf("%d%d%d",&n,&a,&b);
		a=ones(a);
		b=ones(b);
		x=0;
		if(a+b<=n)
			for(i=n;i+a+b>n;--i)
				x^=p[i-1];
		else
			for(i=n;i+n>a+b;--i)
				x^=p[i-1];
		printf("%d\n",x);
	}
	return 0;
}