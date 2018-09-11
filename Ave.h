#ifndef __AVE_H__
#define __AVE_H__ 1

class Point;

_Task Ave {
    static unsigned int cnt;

    void main();

  public:
    unsigned int tid;
    Point pos[2];
    Point velocity[2];

    Ave(float ws, float wc, float wa): ws(ws), wc(wc), wa(wa){tid = cnt += 1;}

};

#endif