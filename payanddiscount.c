#include <stdio.h>
int main()
{
    int a,n,pay;
    printf("enter:");
    scanf("%d%d",&a,&n);
      while(a>0)
      {
          if(a>10)
             a/=10;
          else 
            break;
      }
    if(a==1)
        pay=n*50;
    else if(a==2) 
        pay=n*100; 
    else
        printf("\ninvalid");
    if(pay>=5000)
        pay=(pay-(pay*0.05));//discount
    printf("\npay:%d",pay);
}