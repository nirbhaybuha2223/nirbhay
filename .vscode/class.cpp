#include<iostream>
using namespace std;
class home{
    private:
    int p,q;
    public:

    void set(int a, int b)
    {
        p=a;
        q=b;
    }
    int sum()
    {
        return p+q;
    }
};
int main()
{
    home h1;
    h1.set(100,200);
    cout<<h1.sum();
}