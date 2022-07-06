#include<iostream>
#include<math.h>
using namespace std;
class emi
{
    float e,p,r,t,i,Q;
    public:
    void gdata();
    float cemi();
    float emipay();
    float emitotal();
};
void emi::gdata()
{
    cout<<"\n Enter the loan amount.. ";
    cin>>p;
    cout<<"\n Enter the rate.. ";
    cin>>r;
    cout<<"\n Enter the time.. ";
    cin>>t;
}
float emi::cemi()
{
    r=r/(12*100);
    t=t*12;
    e=(p*r*pow(1+r,t)/(pow(1+r,t)-1));
    return e;
}
float emi::emipay()
{
    i=e*12-p;
    return i;
}
float emi::emitotal()
{
    Q=p+i;
    return Q;
}
int main()
{
    emi a;
    float e,i,Q;
    a.gdata();
    e=a.cemi();
    cout<<"The monthly emi .. "<<e;
    i=a.emipay();
    cout<<"\n pay ble amount .. "<<i;
    Q=a.emitotal();
    cout<<"\n Total pay .. "<<Q;

}

