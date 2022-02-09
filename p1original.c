#include<stdio.h>//0
void input( float *base, float *height)
{
  printf("Enter the value for base and height of triangle\n");
  scanf("%f%f",base,height);
}
void find_area(float base, float height,float *area)
{
  *area=0.5*(base*height);
}
void output(float base, float height, float area)
{
  printf("0.5*(%f*%f)=%f",base,height,area);
}
int main()
{
  float x,y,z;
  input(&x,&y);
  find_area(x,y,&z);
  output(x,y,z);
  return 0;
}