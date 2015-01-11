#include <stdio.h>
int main()	{
	int n,i,j,k,l,m;
	scanf("%d",&n);
	int a[n],b[n+1][n+1];
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	for(i=l=0;i<n;++i)	{
		if(a[i]==0)
			continue;
		b[l][0]=i+1;
		for(j=i,m=1;a[j]!=0;j=k-1,++m)	{
			b[l][m]=a[j];
			k=a[j];
			a[j]=0;
		}
		++l;
	}
	printf("%d\n",l);
	for(i=0;i<l;++i)	{
		printf("%d ",b[i][0]);
		for(j=1;b[i][j]!=b[i][0];++j)
			printf("%d ",b[i][j]);
		printf("%d\n",b[i][0]);
	}
	return 0;
}