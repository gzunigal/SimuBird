#ifndef __BIRD_H__
#define __BIRD_H__ 1

#include <vector>
#include "Point.h"

using namespace std;

_Task Bird {
    static unsigned int cnt;
    float ws;
    float wc;
    float wa;
    void main();

  public:
    unsigned int tid;
    Point pos;
    Point vel;

    Bird(float, float, float);

};

#endif