#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10],temp;
  clrscr();
  int i;
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  temp=a[0];
  for(i=0;i<10;i++)
  {
    if(a[0]>a[i])
    {
      temp=a[i]);
    }
    printf("the largest number is %d",temp);
    getch();
  }
}
