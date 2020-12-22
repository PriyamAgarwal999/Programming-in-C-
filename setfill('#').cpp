#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<setw(6)<<"1234"<<endl;
    cout<<setw(6)<<setfill('#')<<"1234";
    return 0;
}