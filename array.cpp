#include<iostream>
using namespace std;
//int i;
int main(){
int arr[5]={1,2,3,4,5};
for(int i=0;i<5;i++){
       cout<<&arr[i]<<endl;

}

  //cout<<arr<<endl;//similar to address of (&arr[0])
 // cout<<arr+1<<endl;
  for(int i=0;i<5;i++){
       cout<<(arr+i)<<endl;

}
for(int i=0;i<5;i++){
       cout<<*(arr+i)<<endl;

}
cout<<*arr;
  return 0;
}
