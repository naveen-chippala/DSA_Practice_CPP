//finding n power p value using recursion
#include<iostream>
using namespace std;
int pow(double n, double p){
if(n==0 && p==0){
    return 0;
}
else if(n>=1 && p==0){
        return 1;
}
else if (n>1 && p>=1){
return n*pow(n,p-1);//
}
}
int main(){
//double ans,n,p;
//cout<<"enter the n and p values"<<endl;//to calculate n power p value
//cin>>n>>p;
double ans= pow(2,3);
cout<<"powers"<<ans;
}
