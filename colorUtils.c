
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

int toGrayScaleLightness(int red,int green,int blue)
{
  return(max(red,green,blue)+min(red,green,blue))/2;
}
int toGrayScaleLuminosity(int red,int green,int blue)
{
  return (int)(0.21*red+0.72*green+0.07*blue);//using (int) for rounding of!!
}
int toSepiaRed(int red,int green,int blue)
{
  int SepiaRed=(int)(0.393*red+0.769*green+0.189*blue);
  if(SepiaRed>=255)
  {
    return 255;
  }
  return SepiaRed;
}
int toSepiaGreen(int red,int green,int blue)
{
  int SepiaGreen=(int)(0.349*red+0.686*green+0.168*blue);
  if(SepiaGreen>=255)
  {
    return 255;
  }
  return SepiaGreen;
