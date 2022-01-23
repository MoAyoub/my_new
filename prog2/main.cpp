#include <iostream>
#include "dis.h"
#include "dis.cpp"
using namespace std;
int main(){
    int w,l;
    cout<<"hello sir please set a l : ";
    cin>>l; cout<<"\n";
    cout<<"and set another w : ";
    cin>>w; cout<<"\n";
    dis rec;
    rec.setlinght(l);
    rec.setwidth(w);
    cout<<" w = "<<rec.getwidth()<<" and   l=  "<<rec.getlinght()<<endl;
    cout<<" so the area is : "<<rec.area()<<endl;
    /*----------------------*/
    cout<<"hello sir please set a l : ";
    cin>>l; cout<<"\n";
    cout<<"and set another w : ";
    cin>>w; cout<<"\n";
    dis reco;
    reco.setlinght(l);
    reco.setwidth(w);
    cout<<" w = "<<reco.getwidth()<<" and   l=  "<<reco.getlinght()<<endl;
    cout<<" so the area is : "<<reco.area()<<endl;
    /* ----------------------- */
    cout<<" la soome est : "<<rec.resu(rec,reco).area();
	cout<<"Done";
    return 0;
}
