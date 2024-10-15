#include<bits/stdc++.h>
using namespace std;

//class for stack
class Stack
{  
    public:
    int top;
    int size;
    int* arr;


    //constructor for class stack
    Stack()
    {
        top=-1;
        size=1000;
        arr=new int[size]; //dynamically allocating array memmory of type int
    }

    //push function
    void push(int x)
    {
        top++;
        arr[top]=x;
    }
 
 //pop function
  int  Pop()
  {
    int x=arr[top];
    top--;
    return x;
  }

  //top function
  int Top()
  {
    return arr[top];
  }

int getsize()
 {
  return top+1;
 }

};


int main()
{

    Stack S;
    S.push(10);
    S.push(9);
    S.push(8);
    cout <<"Top of stack is before deleting any element "<< S.Top()<<endl;
    cout << "Size of stack before deleting any element " << S.getsize() << endl;
    cout << "The element deleted is " << S.Pop() << endl;
    cout << "Size of stack after deleting an element " << S.getsize() << endl;
    cout << "Top of stack after deleting an element " << S.Top() << endl;
    
    return 0;
}

                                               
         /*|          |
           |----------|
           |----8-----|
           |----9-----|
           |___10_____| */