#include<bits/stdc++.h>
using namespace std;


//implement it with arr
class Stack
{
    int *arr;
    int size;
    int top;

    public:

    bool flag;
    //constructor
    Stack(int s)
    {
        size=s;
        top=-1;
        arr=new int[s];
        flag=1;
    }
    //push
    void push(int value)
    {
        if(top==size-1)
        {
            {
                cout<<"stack overflow\n";
                return;
            }
        }
        else 
        {
            top++;
            arr[top]=value;
            cout<<"Push "<< value <<"  into the stack\n";
            flag=0;
        }
    }
    //pop
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack underflow\n";
        }
        else 
        {
            cout<<"popped" <<arr[top]<<"from the stack\n";
            top--;
            if(top==-1) {
                flag=1;
            }
        }
    }
    //peek
    int peek()
    {
        if(top==-1) 
        {
            cout<<"stack is empty\n";
            return -1;
        }
        else 
        {
            return arr[top];
        }
    }

    //isempty
    bool IsEmpty()
    {
        return top==-1;

    }
    //size
    int IsSize()
    {
        return top+1;
    }
};



int main() {
    Stack S(5);
    // S.push(5);
    // S.push(6);
    // S.push(7);
    S.push(-1);
    // cout<<S.peek()<<endl;
    // cout<<S.IsEmpty()<<endl;
    // cout<<S.IsSize()<<endl;

    int value=S.peek();
    if(S.flag==0)
    cout<<value;


}