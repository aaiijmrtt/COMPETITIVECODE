#include<stdio.h>
int main() {
	int n,a[1001],i,l;
	for(i=0;i<1001;++i)
		a[i]=0;
	scanf("%d",&n);
	for(i=0;i<n;++i) {
		scanf("%d",&l);
		a[l]++;
	}
	printf("%d\n",n);
	for(i=l=0;i<1001;++i)
		if(a[i]!=0) {
			l+=a[i];
			if(l==n)
				break;
			printf("%d\n",n-l);
		}
	return 0;
}
