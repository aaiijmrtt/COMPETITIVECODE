#include <stdio.h>
int main()	{
	int n,i;
	while(scanf("%d",&n))	{
		if(n==0)
			break;
		int a[n];
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);
		for(i=0;i<n;++i)
			if(a[a[i]-1]!=i+1)
				break;
		if(i<n)
			printf("not ambiguous\n");
		else
			printf("ambiguous\n");
	}
	return 0;
}