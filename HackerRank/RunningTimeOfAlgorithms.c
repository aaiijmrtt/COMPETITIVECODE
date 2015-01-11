#include<stdio.h>
int main() {
	int s,i,j,t,c;
	scanf("%d",&s);
	int a[s];
	for(i=0;i<s;++i)
		scanf("%d",&a[i]);
	for(i=1,t=a[1],c=0;i<s;++i) {
		for(j=i;(j>0)&&(a[j-1]>t);--j,++c)
			a[j]=a[j-1];
		a[j]=t,t=a[i+1];
	}
	printf("%d\n",c);
	return 0;
}
