
#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int b=a++;//now b=10 after coming out becomes 11
    cout<<b;
    int  c=a++;//now c=11 after coming out it becomes 12
    cout<<c;//c=11
    cout<<a++;//12 is printed since it not assiigned to any value after coming out it becomes 13
        int d=a++;
        cout<<d;//13 is printed since not aggined to any value
        cout<<++a;
    return 0;
}
