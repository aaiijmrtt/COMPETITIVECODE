#include<stdio.h>
int main() {
	int l,r,i,j,m=0;
	scanf("%d%d",&l,&r);
	for(i=l;i<r;++i)
		for(j=i+1;j<=r;++j)
			if((i^j)>m)
				m=i^j;
	printf("%d\n",m);
	return 0;
}
