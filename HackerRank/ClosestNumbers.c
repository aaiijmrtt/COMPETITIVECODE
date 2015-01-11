#include<stdio.h>
void ms(int *a,int l) {
	if(l==1)
		return;
	ms(a,l/2),ms(&a[l/2],l-l/2);
	int i=0,j=l/2,k=0,A[l];
	while((i<l/2)&&(j<l))
		A[k++]=a[i]<a[j]?a[i++]:a[j++];
	while(i<l/2)
		A[k++]=a[i++];
	while(j<l)
		A[k++]=a[j++];
	for(k=0;k<l;++k)
		a[k]=A[k];
}
int main() {
	int n,i,j,m;
	scanf("%d",&n);
	int a[n],d[n];
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	ms(a,n);
	for(i=1;i<n;++i)
		d[i]=a[i]-a[i-1];
	for(i=1,m=d[1];i<n;++i)
		if(d[i]<m)
			m=d[i];
	for(i=1;i<n;++i)
		if(d[i]==m)
			printf("%d %d ",a[i-1],a[i]);
	printf("\n");
	return 0;
}
