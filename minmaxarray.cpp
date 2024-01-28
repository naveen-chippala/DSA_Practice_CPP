#include<iostream>
using namespace std;
int min_max_arr(int ar[],int n){
    static int j=0,a[5];
for(int j=0;j<n;j++){
	a[j]=ar[j];
	j++;
}
return ar;
} int main(){

    static int a[5];
int arr[]={5,6,1,9,0}; int size=sizeof(arr)/sizeof(arr[0]); //20 divided by 4
cout<<"actual array\n";
 for(int i=0;i<size;i++){
	cout<<" "<<arr[i];
}
cout<<endl;
 cout<<"changed array"<<endl;
min_max_arr(arr,size);
for(int i=0;i<size;i++){
	cout<<" "<<a[i];
}
 return 0;
}
