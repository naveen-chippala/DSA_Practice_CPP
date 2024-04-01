/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class linkedlist{
    public:
    linkedlist(int a){
        cout<<"created"<<&a<<endl;
    }
};
int main()
{
//     int *p,a=11;
//   p=new int[5];
//     p[0]=5;
linkedlist *ll;
ll=new linkedlist(19);
cout<<(ll);
    return 0;
}
