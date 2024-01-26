#include<iostream>
using namespace std;
//struct student{
//int rno;
//char name[20];
//}s1;
struct node {
int data;
struct node *next;
};
int main()
{
//student s1={19,"naveen"};
//cout<<s1.name;
//OR
//struct student s2={19,"naveen"};
//cout<<s2.name;
//cout<<size0f(s2);
//array of structures
//struct student s1[5]={{1,"naveen"},{2,"ravi"},{3,"ramesh"},{4,"ajay"}};
//cout<<s1[2].name;
//cout<<sizeof(s1);
/*struct node *pt;
pt=new  node;
cout<<sizeof(pt->next)<<endl;
cout<<sizeof(pt->data)<<endl;
cout<<sizeof(pt)<<endl;
cout<<pt ->data<<endl;
cout<<sizeof(node);*/
char *p="hello";
cout<<*p;


}
