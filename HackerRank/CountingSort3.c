#include<stdio.h>
int main() {
	int n,i,t;
	scanf("%d",&n);
	int a[100];
	for(i=0;i<100;++i)
		a[i]=0;
	for(i=0;i<n;++i) {
		scanf("%d%*s",&t);
		a[t]++;
	}
	printf("%d ",a[0]);
	for(i=1;i<100;++i) {
		a[i]+=a[i-1];
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
