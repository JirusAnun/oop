#include <iostream>
using  namespace std;
#include "Time.h"

int main(){
    TIME t1,t2,t3;
    cout<<"What time was it?"<<endl;
    t1.getTime();
    cout<<"What time is it now?"<<endl;
    t2.getTime();
    t3=t2.subtract(t1); //t3=t2-t1
    cout<<"Time diff is ";
    t3.display();
}