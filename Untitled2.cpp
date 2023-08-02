#include<bits/stdc++.h>
using namespace std;
int main()
{
    float rlt=0.0042, ab, Tm=48.0474, Tr, prc;
    Tr=Tm/(rlt+1);
    cout<<"True Value: "<<Tr <<endl;
    ab=Tm-Tr;
    if(ab < -1)
        ab=ab*(-1);
    cout<<"Absolute Error: "<<ab <<endl;
    prc=rlt*100;
    cout<<"Percentage Error: "<<prc <<"%"<<endl;
}
