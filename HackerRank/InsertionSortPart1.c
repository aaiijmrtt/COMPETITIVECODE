#include<stdio.h>
int main() {
	int s,i,j,t;
	scanf("%d",&s);
	int a[s];
	for(i=0;i<s;++i)
		scanf("%d",&a[i]);
	for(i=s-1,t=a[s-1];(i>0)&&(a[i-1]>t);--i) {
		a[i]=a[i-1];
		for(j=0;j<s;++j)
			printf("%d ",a[j]);
		printf("\n");
	}
	a[i]=t;
	for(i=0;i<s;++i)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
