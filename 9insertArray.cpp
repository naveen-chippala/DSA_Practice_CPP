#include<iostream>
using namespace std;
void insertArray(int arr[],int n,int ele,int pos)
{
    n=n+1;
    for(int i=n-1;i>pos;i--){
            arr[i]=arr[i-1];


    }
    arr[pos]=ele;
   // return arr[];
}
void searching(int arr[],int ele,int n){
for(int i=0;i<n+1;i++){
    if(arr[i]==ele){
        cout<<"element found at position"<<(i+1)<<endl;
    }
}
cout<<"element not found"<<endl;

}
void removeElement(int arr[],int ele,int n)
{
  for(int i=0;i<n+1;i++){
    if(arr[i]==ele){
       for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
       }
    }
}
}

int main(){
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
insertArray(arr,n,23,2);

for(int i=0;i<n+1;i++){
    cout<<arr[i]<<endl;
}
searching(arr,23,n);
removeElement(arr,23,n);
for(int i=0;i<n-1;i++){
    cout<<arr[i]<<endl;
}
return 0;
}
