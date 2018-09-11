#include <iostream>					// cout
#include <iomanip>					// setw
#include <stdlib.h>					// rand_r
using namespace std;

_Task Ave {
    static unsigned int cnt;				// for uniquely numbering set of tasks
    unsigned int tid;					// individual task number
    unsigned int seed;					// private seed variable

    void main() {

    }

  public:
    T() {
	    tid = cnt += 1;					// unique seed value for each task
    }
};

unsigned int T::cnt = 0;				// initialize static counter

int main() {
  
  T t[5];						// create set of identical tasks
}