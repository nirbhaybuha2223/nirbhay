#include<iostream>
int main()
{
    float phy=65,chem=80,maths=77,per,total;
    std::cout<<"phy:"<<phy;
    std::cout<<"\n chem:"<<chem;
    std::cout<<"\n maths:"<<maths;
    total=phy+chem+maths;
    std::cout<<"\ntotal:"<<total;
    per = phy+chem+maths/3;
    std::cout<<"\n per:"<<per;
}