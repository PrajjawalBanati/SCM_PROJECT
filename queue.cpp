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
cout<<"Element cannot be inserted as the queue will overflow or means it is full";
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
cout<<add_item<<" is inserted in the queue";
}
}
};
//Commit 2
int main()
{
queue obj;
int i;
char ch;
cout<<"Hello Everyone,\n Welcome to my program of QUEUE IMPLEMENTATION USING ARRAYS IN C++\n My name is Prajjawal Banati. This is a program of queue implementation using arrays.";
cout<<"Firstly queue is a linear data structure which follows FIFO(First In First Out) principle. A very good example of illustrating is the customer going to a store. They follow a pattern means the customer who arrived first in the store will be entertained first similarly the operations on that element will be performed which is inserted first. Now let us do it practically. Following are the operations that can be performed by my program ";
cout<<"\n(1)INSERTION: Please note that the insertion done can be from one side \n(2)DELETION: Please note that deletion is done of the element is least recently added\n(3)DISPLAY: Display the elements inserted in the queue\n ";
do
{
cout<<"\nNow please select the choice according to the operation you want to perform:\n(1) INSERTION\n(2) DELETION\n(3) DISPLAY\nEnter your choice: \n";
cin>>i;
switch(i)
{
    case 1: obj.insert();
        break;
    case 2:
        break;
    case 3:
        break;
    default: cout<<"\nPLEASE ENTER THE RIGHT CHOICE\n";
}
cout<<"\nDo you want to do another operation again ? ";
cin>>ch;
}while(ch=='Y'||ch=='y');
return 0;
}

