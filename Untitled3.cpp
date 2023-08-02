#include<bits/stdc++.h>
using namespace std;
int main()
{
    double N=1, Ea, Er, number=8.6;
    Ea=0.5*(1/pow(10,N));
    cout<< "Ea: " << Ea << endl;
    Er=Ea/number;
    cout<< "Relative Error: " << Er << endl;
}
