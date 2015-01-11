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
	int t,m,n,i,j;
	long long int c,v,h;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&m,&n);
		int x[--m],y[--n];
		for(i=0;i<m;++i)
			scanf("%d",&x[i]);
		ms(x,m);
		for(j=0;j<n;++j)
			scanf("%d",&y[j]);
		ms(y,n);
		for(i=m-1,j=n-1,c=0,v=h=1;(i>=0)&&(j>=0);)
			if(x[i]>y[j]) {
				c+=v*x[i];
				c%=1000000009;
				printf("c[%lld]:v[%lld]:h[%lld]:x[%d]\n",c,v,h,x[i]);
				h++;
				i--;
			}
			else {
				c+=h*x[j];
				c%=1000000009;
				printf("c[%lld]:v[%lld]:h[%lld]:y[%d]\n",c,v,h,y[j]);
				v++;
				j--;
			}
		for(;i>=0;++h,--i) {
			c+=v*x[i];
			c%=1000000009;
				printf("c[%lld]:v[%lld]:h[%lld]:x[%d]\n",c,v,h,x[i]);
		}
		for(;j>=0;++v,--j) {
			c+=h*y[j];
			c%=1000000009;
				printf("c[%lld]:v[%lld]:h[%lld]:y[%d]\n",c,v,h,y[j]);
		}
		printf("%lld\n",c);
	}
	return 0;
}
