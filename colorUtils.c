
#include "colorUtils.h"

double rgbIntToFloat(int c) {
  return (c / 255.0);
}

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}


int min(int a,int b,int c)
{
  int min=a;
  if(b<min)
  {
    min=b;
  }
  if(c<min)
  {
    min=c;
  }
  return min;
}


int toGrayScaleAverage(int r, int g, int b) {
  //TODO: test this, it may be wrong!
  return (r + g + b) / 3;
}
