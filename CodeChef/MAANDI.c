#include<stdio.h>
#include<math.h>
int ol(int n) {
 while(n)
  if((n%10==4)||(n%10==7))
   return 1;
  else
   n/=10;
 return 0;
}
int main() {
 int t,n,x,f,d;
 scanf("%d",&t);
 while(t--) {
  scanf("%d",&n);
  for(d=0,f=1,x=(int)floor(sqrt(n))+1;f<x;++f)
   if(n%f==0) {
    if(ol(f))
     d++;
    if(ol(n/f))
     d++;
   }
  printf("%d\n",d);
 }
 return 0;
}