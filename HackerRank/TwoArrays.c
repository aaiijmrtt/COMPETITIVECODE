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
	int t,n,k,i;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&n,&k);
		int a[n],b[n];
		for(i=0;i<n;++i)
			scanf("%d",&a[i]);
		for(i=0;i<n;++i)
			scanf("%d",&b[i]);
		ms(a,n);
		ms(b,n);
		for(i=0;i<n;++i)
			if(a[i]+b[n-1-i]<k)
				break;
		if(i<n)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
