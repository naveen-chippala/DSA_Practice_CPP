#include<iostream>
using namespace std;
class demo{
public:
    int a,b;
     demo(int a,int b){
    cout<<""<<a+b;
    }
    ~demo(){
    cout<<"destroyed";
    }

};
int main()
{
    demo d(10,20);//calling should be done during initaialisation of objects
    return 0;
}
