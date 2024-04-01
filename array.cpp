#include<iostream>
using namespace std;
//int i;
int main(){
/*int arr[5]={1,2,3,4,5};
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
cout<<*arr;*/
  int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        arr[0]=0;
        //int j =
        for(int i=1;i<20;i++){
                if(arr[i]!=0){
            int a=arr[i]*arr[i];
            for(int j=a-1;j<20;j++){
                if(arr[j]%arr[i]==0 && arr[j!=0]){
                    arr[j]=0;
                }
            }

        }
        }
        for(int i=0;i<20;i++){
                //if(arr[i]!=0)
                    cout<<(arr[i])<<endl;

}

          return 0;
}
