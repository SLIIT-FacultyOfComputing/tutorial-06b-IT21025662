#include "Box.h"
#include <iostream>

using namespace std;

void Box::setLength(int pLength)
{
   length = pLength ;
}

void Box::setWidth(int pWidth)
{
   width = pWidth;
  
}

void Box::setHeight(int pHeight)
{
   height = pHeight;
}

int Box::getLength()
{
  return length;
}

int Box::getWidth()
{
  return width;
}

int Box::getHeight()
{
  return height;
}

// Implement setters and getters

// Implemenet the calcVolume() unction
int Box::calcVolume() {
   return length * width * height;
}