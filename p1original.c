#include <stdio.h>
#include <math.h>

float input(){
  float x;
  printf("enter a number");
  scanf("%f",&x);
  return x;

}

float distance(float x1,float y1,float x2,float y2){
  float result;
  result = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
  return result ;
  
}


int main(){
  float x1,y1,x2,y2;
  x1 = input();
  y1 = input();
  x2 = input();
  y2 = input();
  float result;
  result =distance( x1,y1,x2,y2);
  printf("result is %f",result);
  return 0;
  
}