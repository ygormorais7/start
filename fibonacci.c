#include <stdio.h>
int main(){
  int c,i,n,f[60];
  f[0]=0;
  f[1]=1;
  scanf("%d",&c);
do{
  scanf("%d",&n);
  for(i=2;i<=n;i++){
    f[i]=f[i-1]+f[i-2];
  }
  printf("Fib(%d) = %d\n",n,f[n]);
  c--;
}while(c>0);

return 0;
}
