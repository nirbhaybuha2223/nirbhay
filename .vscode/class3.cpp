#include <iostream>
using namespace std;
class skill
{

public:
    int i, roll[5], maths[5], chem[5], phy[5], total[5], per[5],grade[5];

public:
    void getdata()
    {
        for (i = 0; i < 5; i++)
        {
            cout << "\nEnter the ";
            cin >> roll[i];
            cout << "\nEnter the maths ";
            cin >> maths[i];
            cout << "\nEnter the chem";
            cin >> chem[i];
            cout << "\nEnter the phy";
            cin >> phy[i];

            total[i] = maths[i] + chem[i] + phy[i];
            cout << "\n total : " << total[i];

            per[i] = total[i] / 3;
            cout << "\n per : " << per[i];
        if(per[i]>=91&&per[i]<=100)
        {
        cout<<"\nA1";
        }
        else if(per[i]>=81&&per[i]<=90)
        {
        cout<<"\nA2";
        }
        else if(per[i]>=71&&per[i]<=80)
          {
            cout<<"\nB2";
        }
        else if(per[i]>=61&&per[i]<=70)
        {
            cout<<"\nC1";
        }
        else if(per[i]>=51&&per[i]<=60)
        {
        cout<<"\nC2";
        }
        else if(per[i]>=41&&per[i]<=50)
        {
            cout<<"\nD";
        }
        else if(per[i]>=31&&per[i]<=40)
        {
            cout<<"\nE1";
        }
        else if(per[i]>=21&&per[i]<=30)
        {
            cout<<"\nD";
        }
        else if(per[i]>=11&&per[i]<=20)
        {
            cout<<"\nFAIL";
        }
            }
        }

};
int main()
{
    skill s1;
    s1.getdata();

}
 