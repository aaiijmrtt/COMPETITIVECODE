#include<stdio.h>
#include<math.h>
int kp(int n) {
 int p=0,f=2;
 if((n%f)==0) {
  p++;
  while((n%f)==0)
   n/=f;
 }
 for(f=3;f<sqrt(n);f+=2)
  if((n%f)==0) {
   p++;
   while((n%f)==0)
    n/=f;
  }
 return (n==1)?p:(p+1);
}
int main() {
 int t,a,b,k,n,i,f[100001];
 for(i=2;i<100001;++i)
  f[i]=kp(i);
 scanf("%d",&t);
 while(t--) {
  scanf("%d%d%d",&a,&b,&k);
  for(n=0,++b;a<b;++a)
   if(f[a]==k)
    n++;
  printf("%d\n",n);
 }
 return 0;
}