#include<iostream>
using namespace std;
class exp
{
    int a,b;
    public:
    void set_ab(int x,int y)
    {
        a=x;b=y;
    }
    void get_ab()
    {
        cout<<"\n A : "<<a;
        cout<<"\n B : "<<b;
    }
    exp add(exp e1,exp e2)
    {
        exp e_temp;
        e_temp.a=e1.a+e2.a;
        e_temp.b=e1.b+e2.b;
        return e_temp;
    }
};
int main()0
{
    exp e1,e2,e3;
    e1.set_ab(10,20);
    e2.set_ab(11,21);
   e3=e3.add(e1,e2);
    e3.get_ab();
}