//
// Created by Gaurav Wagh on 13-06-2025.
//

#include <iostream>
using namespace std;
class stack{
public:
    int* arr;
    int top,size,temp,i;
    stack(int s) {
        top=-1;
        size=s;
        arr=new int[s];
    }
    bool isEmpty() {
        if(top==-1) {
            return true;
        }else {
            return false;
        }
    }
    bool isFull() {
        if (top==(size-1)){
            return true;
        }else {
            return false;
        }
    }
    void push(int x) {
        if(isFull()) {
            cout<<"\nstack is full \n";
        }else {
            ++top;
            arr[top]=x;
        }
    }
    int pop() {
        if(isEmpty()) {
            cout<<"\n stack is empty \n";
        }else {
            temp=arr[top];
            arr[top]=NULL;
            top--;
            return temp;
        }
    }
    void show() {
        if(isEmpty()) {
            cout<<"\n stack is empty";
        }else {
            for (i=top;i>=0;i--) {
                cout<<arr[i]<<endl;
            }
        }
    }
};

int main() {
    stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.show();
    cout<<endl;
    int pop =s.pop();
    cout<<pop<<endl;
    cout<<endl;
    s.show();
    return 0;
}
