#include "dis.h"
#include <iostream>
using namespace std;
dis::dis():linght(1),width(1){}
dis::~dis(){};

void dis::setlinght(int l){
    linght=l;
}
void dis::setwidth(int w){
    width=w;
}
int dis::getlinght(){
    return linght;
}
int dis::getwidth(){
    return width;
}
int dis::area(){
    return width*linght;

}
dis dis::resu(dis d1,dis d2){
    dis rusal;
    rusal.linght=d1.linght+d2.linght;
    rusal.width=d1.width+d2.width;
    return rusal;
}


