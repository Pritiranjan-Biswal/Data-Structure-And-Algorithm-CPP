#include<bits/stdc++.h>
using namespace std;


class Node 
{
    public:
    int data;
    Node *next;

    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
class Stack
{
    Node *top;
    int size; //actual size of stack

    public:
    Stack()
    {
        top=NULL;
        size=0;

    }
    //push
    void push(int value)
    {
        Node *temp=new Node(value);
        if(temp==NULL)
        {
            cout<<"Stack Overflow\n"<<endl;
            return;
        }
        else {
            temp->next=top;
            top=temp;
            size++;
            cout<<"pushed "<<value<< " into the stack\n";
        }
        
    }
    //pop
    void pop()
    {
        if(top==NULL)
        {
            cout<<"stack underflow\n"<<endl;
            return;
        }
        else 
        {
            Node *temp=top;
            cout<<"Popped " << top->data<<" from the stack\n"<<endl;
            top=top->next;
            delete temp;
            size--;
        }
    }

    //peek
    int peek()
    {
        if(top==NULL)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else 
        {
            return top->data;
        }
    }
    //IsEmpty
    bool IsEmpty()
    {
        return top==NULL;
    }

    //IsSize
    int IsSize()
    {
        return size;
    }

};




int main()
{
    Stack S;
    S.push(6);
    S.push(7);
    S.push(8);
    S.push(9);
    S.push(10);
    cout<<S.IsSize();
}