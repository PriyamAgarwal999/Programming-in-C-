#include <iostream>
using namespace std;
int main()
{
cout.setf(ios::hex,ios::basefield);
cout.setf(ios::showbase);
cout<<100<<endl;
cout.unsetf(ios::hex);
cout<<100;
    return 0;
}