

#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int *p;
    p=&a;//or it is same as  int *p=&a;
    cout<<&a<<endl;
    *p=50;
    cout<<a<<endl;
        int *b;
        b=&a;
    cout<<b;
    return 0;
}
