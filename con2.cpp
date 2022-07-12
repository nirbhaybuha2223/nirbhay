#include<iostream>
using namespace std;
class findage
{
    int age;
    public:
    findage(int n)
    {
        age=n;
        cout<<"\n Age :"<<age;
    }
    findage(findage &new_age)
    {
        age=new_age.age;
        cout<<"\n Age : "<<age;
    }
};
int main()
{
    findage per(20);
    findage per2(per);
    return 0;
}