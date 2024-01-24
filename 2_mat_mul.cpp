#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the rows and columns ";
    cin>>a>>b;
int mat[a][b];

for(int i=0;i<a;i++){
for(int j=0;j<b;j++){
cin>>mat[i][j];

}}
cout<<"original matrix:"<<endl;
for(int i=0;i<a;i++){
for(int j=0;j<b;j++){

cout<<" "<<mat[i][j];

}
cout<<endl;
}
int mat2[b][a];
for(int i=0;i<b;i++){
for(int j=0;j<a;j++){
        //cout<<"transpose matrix:";

mat2[i][j]=mat[j][i];

}
}
cout<<"transpose matrix:\n";
for(int i=0;i<b;i++){
for(int j=0;j<a;j++){

cout<<" "<<mat2[i][j];

}
cout<<endl;
}
}
