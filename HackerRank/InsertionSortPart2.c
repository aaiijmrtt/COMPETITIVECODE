#include<stdio.h>
int main() {
	int s,i,j,t;
	scanf("%d",&s);
	int a[s];
	for(i=0;i<s;++i)
		scanf("%d",&a[i]);
	for(i=1,t=a[1];i<s;++i) {
		for(j=i;(j>0)&&(a[j-1]>t);--j)
			a[j]=a[j-1];
		a[j]=t;
		t=a[i+1];
		for(j=0;j<s;++j)
			printf("%d ",a[j]);
		printf("\n");
	}
	return 0;
}
