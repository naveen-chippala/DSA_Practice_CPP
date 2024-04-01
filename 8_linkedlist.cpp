/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
int main()
{
    //CLassName *CLassNameObject = new CLassNameObject;
   node *head=new node();
   node *mid=new node();
   head->data =10;
   mid->data=20;
   head->next =mid;
   mid->next=NULL;
  cout<<mid->next<<endl;
  cout<<&mid<<endl;
  cout << head->data << endl;

  cout<<&mid<<endl;
    return 0;
}
/*Construct the binary search tree using the values mentioned below and find the ‘Inorder’ of that.

50,7,80,9,10,100,17,3Construct the binary search tree using the values mentioned below and find the ‘Inorder’ of that.

50,7,80,9,10,100,17,3Define a function that takes the head of a circular linked list as an argument and prints all the elements of the list one by one separated by spaces. The defintion of the linked list has already been provided to you.




Note: Input items are inserted at the front of the linked list that is why the output is in reverse order.*/


