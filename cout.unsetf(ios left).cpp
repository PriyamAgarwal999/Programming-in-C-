#include <iostream>
using namespace std;
int main()
{
cout.width(6);
cout.fill('*');
cout.setf(ios::left,ios::adjustfield);
cout<<"123"<<endl;
cout.width(6);
cout.setf(ios::left,ios::adjustfield);
cout.unsetf(ios::left);
cout<<"123";
    return 0;
}