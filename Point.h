#ifndef __AVE_H__
#define __AVE_H__ 1

class Point{
    float x;
    float y;
  
  public:
    Point(float x, float y): x(x), y(y){}

    float* getXY();
    Point operator+(Point);
    Point operator-(Point);
    Point dist(Point)
    Point mod()
}

#endif