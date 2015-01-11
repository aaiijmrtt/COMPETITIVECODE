#include<stdio.h>
int main() {
 int t,n,x,a,m,i,s;
 scanf("%d",&t);
 while(t--) {
  scanf("%d%d",&n,&x);
  for(i=s=0,m=100;i<n;++i)
   scanf("%d",&a),m=a<m?a:m,s+=a;
  printf("%d\n",(s%x>=m)?-1:(s/x));
 }
 return 0;
}