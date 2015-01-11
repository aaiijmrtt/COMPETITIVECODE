#include <stdio.h>
int main()	{
	int t,n,i,j,k,m;
	scanf("%d",&t);
	while(t--)	{
		scanf("%d",&n);
		int p[n],r[n];
		for(i=0;i<n;++i)
			scanf("%d",&p[i]);
		for(i=0;i<n;++i)
			scanf("%d",&r[i]);
		for(i=0;i<n-1;++i)
			for(j=0;i+j<n-1;++j)	{
				if(p[j]<p[j+1])	{
					m=p[j];
					p[j]=p[j+1];
					p[j+1]=m;
				}
				if(r[j]<r[j+1])	{
					m=r[j];
					r[j]=r[j+1];
					r[j+1]=m;
				}
			}
		for(i=j=k=0;i<n&&j<n;++i)	{
			if(!(p[i]>r[j]))	{
				j++;
				k++;
			}
		}
		printf("%d\n",k);
	}
	return 0;
}