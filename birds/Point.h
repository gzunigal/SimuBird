#ifndef __AVE_H__
#define __AVE_H__ 1

class Point{
  public:
    float x;
    float y;
  
    Point();
    Point(float, float);

    float* getXY();
    Point operator+(Point);
    Point operator-(Point);
    Point operator/(float);
    float dist(Point);
    float mod();
};

#endif