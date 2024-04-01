/*Input: linked list = 1 -> 2 -> 3 -> 4 -> 5
Output: 3
Explanation: There are 5 nodes in the linked list and there is one middle node whose value is 3.

Input: linked list = 1 -> 2 -> 3 -> 4 -> 5 -> 6
Output: 4
Explanation: There are 6 nodes in the linked list, so we have two middle nodes: 3 and 4, but we will return the second middle node which is 4.*/
#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
class linkedlist
{
public:
    node* head;
    linkedlist()
    {
        head=NULL;
    }

    void insertnode(int data)
    {
        node* newnode=new node(data);
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            node* temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=newnode;
        }
    }
    void printlist()
    {
        node *temp=head;
        while(temp!=NULL)
        {
            cout<<"--"<<temp->data;
            temp=temp->next;
        }
    }
    void printmiddle()
    {

        int count=0;
        node* temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        int mid=count/2;
        node *temp2=head;
        for(int i=0; i<=mid; i++)
        {

            if(i==mid){
                cout<<"\nmid valiue in linked list is :- "<<temp2->data;
            }
            else{
                temp2=temp2->next;
            }
        }

    }
};


int main()
{
    linkedlist ll;
    ll.insertnode(10);
    ll.insertnode(20);
    ll.insertnode(30);
    ll.insertnode(40);
    ll.insertnode(50);
    ll.insertnode(60);
    ll.insertnode(70);
    ll.printlist();
    ll.printmiddle();


    return 0;
}
