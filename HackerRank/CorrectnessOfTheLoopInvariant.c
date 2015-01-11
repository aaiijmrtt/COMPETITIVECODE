#include<stdio.h>
int main() {
    int s,i,j,t;
	scanf("%d",&s);
	int x[s];
	scanf("%d",&x[0]);
	for(i=1;i<s;++i) {
		scanf("%d",&t);
		for(j=i;(j>0)&&(x[j-1]>t);--j)
			x[j]=x[j-1];
		x[j]=t;
		t=x[i+1];
    }
	for(i=0;i<s;++i)
		printf("%d ",x[i]);
	printf("\n");
	return 0;
}
