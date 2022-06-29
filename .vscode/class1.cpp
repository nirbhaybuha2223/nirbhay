#include<iostream>
using namespace std;
class home
{
    private:
    int p,q,r;

    public:

    void set(int a, int b,int c)
    {
        p=a;
        q=b;
        r=c;
    }
    int sum()
    {
        return p+q+r;
    }
};
int main()
{
    home h1;
    h1.set(100,200,300);

    cout<<h1.sum();
}         