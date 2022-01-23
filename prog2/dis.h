#pragma once
using namespace std;
class dis {
    private:
    int linght;
    int width;
    public:

    void setlinght(int l);
    void setwidth(int w);
    int getlinght();
    int getwidth();
    int area();
    dis resu(dis d1,dis d2);
    dis();
    ~dis();
};