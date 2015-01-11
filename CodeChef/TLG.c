#include <stdio.h>
#include <math.h>
int main()	{
	int n,w,l,s,t,a,b;
	l=s=t=0;
	scanf("%d",&n);
	while(n--)	{
		scanf("%d%d",&a,&b);
		s+=a;
		t+=b;
		if(abs(s-t)>l)	{
			l=abs(s-t);
			if(s>t)
				w=1;
			else
				w=2;
		}
	}
	printf("%d %d",w,l);
	return 0;
}