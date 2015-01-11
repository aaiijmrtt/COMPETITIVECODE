#include<stdio.h>
int main() {
	int n,a[101],i,s;
	scanf("%d",&n);
	for(i=0;i<101;++i)
		a[i]=0;
	for(i=0;i<n;++i) {
		scanf("%d",&s);
		a[s]++;
	}
	for(i=0;i<101;++i)
		if(a[i]&0x1) {
			printf("%d\n",i);
			break;
		}
	return 0;
}
