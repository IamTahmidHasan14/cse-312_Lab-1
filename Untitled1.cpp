#include<bits/stdc++.h>
using namespace std;
int main()
{
    float rlt, ab, Tr=145.9, Tm=146.2;
    ab=(Tr-Tm);
    if(rlt > -1)
        ab=ab*(-1);
    cout<<"Absolute Error: "<<ab <<endl;

    rlt=ab/Tr;
    cout<<"Relative Error: "<<rlt <<endl;
}
