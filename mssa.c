#include<iostream>
using namespace std;
class stacks
{
    int *arr;
    int *top;
    int *next;
    int n,k;
    int max;
    int free;
    public:
    stack(int k,int n)
    boolIsFull()
    {
        return(free==-1);
    }
    void push(int item,int s);
    void pop(int s);
    boolIsEmpty(int s)
    {
        return(top[s]==-1);
        
    }
};
stacks::stacks(int k1,int n1)
{
    k=k1,n=n1;
    arr=new int[n];
    top=new int[n];
    next=new int[n];
    for(i=0;i<n-1;i++)
    top[i]=-1;
    free=0;
    for(int i=0;i<n-1;i++)
    next[i]=i+1;
    next[n-1]=-1;
}
void stack::push(int item,int s)
{
    if(isFull())
    {
        cout<<"\n stack overflow \n";
        return;
    }
    int i=free;
    free=next[i];
    next[i]=top[s];
    top[s]=i;
    [i]=item;
}
int stacks::pop(int s)
{
    if(IsEmpty(s))
    {
        cout<<"\n stack overflow \n";
        return 0;
        int l=top[s];
        top[s]=next[l];
        free=l;
        return arr[l];
    }
    int main()
    {
        int k=l1,n=12;
        stack ks(k,n);
        ks.push(5,9);
        ks.push(3,3);
        ks.push(0,3);
        ks.push(15,2);
        ks.push(45,2);
        ks.push(15,2);
        ks.push(17,1);
        ks.push(49,1);
        ks.push(39,1);
        ks.push(9,0);
        ks.push(7,0);
        cout<<"popped element from stack 3 is:"<<ks.pop(3);
        cout<<"popped element from stack 2 is:"<<ks.pop(2)<<endl;
        cout<<"popped element from stack 1 is:"<<ks.pop(1)<<endl;
        cout<<"popped element from stack 0 is:"<<ks.pop(0)<<endl;
        return 0;
    }
