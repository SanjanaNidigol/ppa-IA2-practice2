#include<stdio.h>//0
int input_side()
{ int a;
  printf("enter the values for three sides of triangle\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c)
{
 int isscalene;
 if(a==b && a==c)
 {
   isscalene=0;
   return 0;
 } 
 else 
 {
   isscalene=1;
   return 1;
 }
 return isscalene;
}
void output(int a, int b, int c, int isscalene)
{
  if(isscalene==0)
  {
    printf("is not scalence triangle \n");
  }
   else
   {
     printf("is scalene triangle\n");
   }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}
