#include<stdio.h>
#include<conio.h>

int main()
{
  int x, d, t=0;
  float p;
  scanf("%d %f", &x, &p);
  while(x>=1)
  {
    t=t+x;
    d=x*(p/100);
    if(d==0)
      break;
    x=x-dif;
  }
  printf("%d", t);
  return 0;
}
