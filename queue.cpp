//Commit 1
#include<iostream>
using namespace std;
class queue
{
public:
int que[5];
int rear,front;
queue()
{
rear=-1;
front=-1;
}
void insert()
{
int add_item,i;
if(rear==4)
{
cout<<"Element cannot be inserted as the queue will ovrelflow or means it is full";
return;
}
else
{
if(front == -1)
front=0;
cout<<"Enter the first element to be inserted in the queue";
cin>>add_item;
rear++;
que[rear]= add_item;
}
}
};

