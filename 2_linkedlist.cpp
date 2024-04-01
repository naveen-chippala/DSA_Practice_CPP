#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    //node(/*int d*/int data){
    //if same name of variable we use this
    //data=d;
    //this->data=data;
    //  this->next=nullptr;
    //}
};

class linkedlist
{
public:
    node* head;
    linkedlist()
    {
        head=nullptr;
    }
    void addFirst(int);
    void addLast(int );
    void printdata();
    bool searchlist(int);
    int deletenode(int);
};
void linkedlist::addLast(int data)
{
    node* newnode=new node();
    newnode->data=data;
    newnode->next=nullptr;
    if(head==nullptr)
    {
        head=newnode;
    }
    else
    {
        node* temp=head;
        while(temp->next!=nullptr) //important logic
        {
            temp=temp->next;
        }

        temp->next=newnode;
    }

}
void linkedlist::printdata()
{
    node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data;
        cout<<"--";
        temp=temp->next;
        // delete newnode;
    }
}
void linkedlist::addFirst(int data)
{
    node* newnode=new node();
    newnode->data=data;//this line is similar to (*newnode).data
    newnode->next=head;
    head=newnode;
}
bool linkedlist::searchlist(int ele)
{
    node *trav=head;
    while(trav!=nullptr)
    {
        if(trav->data==ele)
        {
            return 1;
        }
        else
        {
            trav=trav->next;
        }
    }

    return 0;
}
int linkedlist:: deletenode(int val)
{
    node *trav=head;

        if(head->data==val)
        {
            head=head->next;
            delete trav;
        }
        else
        {

        }


    return 0;

   /* node* trav;
    if(head->data==val)
    {
        trav=head;
        head=trav->next;
        delete trav;
    }
    else
    {
        node* current=head;
        while(current->next!=nullptr)
        {
            if(current->data==val){

            }
        }
    }*/

}
int main()
{
    linkedlist ll;
    ll.addFirst(10);
    ll.addFirst(20);
    ll.addFirst(30);
    ll.addFirst(40);
    ll.addLast(1);
    ll.addLast(2);
    ll.addLast(3);
    ll.printdata();
    if(ll.searchlist(3))
    {
        cout<<"\nelement found\n";
    }
    else
    {
        cout<<"\n not found\n";
    }
    ll.deletenode(40);
    ll.printdata();
    return 0;
}
