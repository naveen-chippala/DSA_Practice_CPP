#include<iostream>
using namespace std;
bool Find(int arr[],int a ,int b){
if(arr[a]==arr[b]){
    cout<<"connected";

}
else{
    cout<<"no connection"<<endl;
}

}
void Union(int a,int b,int arr[],int n)
{
    arr[a]=arr[b];

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        arr[i]=i;

    }
    Union(2,1,arr,n);
    Union(5, 2,arr,n);
    Union(6, 5,arr,n);
    Union(9, 3,arr,n);
    Union(4,3,arr,n);
    Union(8,4,arr,n);
    for(int j=0; j<n; j++)
    {
        cout<<arr[j];

    }
    Find(arr,9,7);
    return 0;
}
