#include <stdio.h>
int main()	{
	int t,n,z,i,p[12]={5};
	for(i=1;i<12;++i)
		p[i]=5*p[i-1];
	scanf("%d",&t);
	while(t--)	{
		scanf("%d",&n);
		for(i=z=0;i<12;++i)
			z+=n/p[i];
		printf("%d\n",z);
	}
	return 0;
}