#include <iostream>
#include<string.h> 
using namespace std;
int main()
{
    char *str=strdup("IIT Kharagpur");
    cout<<str<<endl;
    str[0]='N';
    cout<<str<<endl;
    str=strdup("JIT Kharagpur");
    cout<<str;
    return 0;
}