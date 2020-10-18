/* This code demonstrate the usage of pointer.
 * The swap function takes pointers as argument.
 * Without the use of pointer we cannot swap using a function.
 * Without the pointer we have to do the swapping in main.
 */

#include <iostream>
#include <cstdlib>
using namespace std;


void swap(int *x,int *y)
{
    int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=10;
    int b=11;

    /* This section below demonstrate the basic referencing and dereferencing */
    int *ptr;
    ptr=&a;  // or it can be done in one line using  int *ptr = &a;
    cout <<"Address of a is: "<<ptr<<endl;
    cout<<"Value of a is: "<<a<<endl;
    cout <<"Address of pointer ptr is: "<<&ptr<<endl;
    cout <<"Value of a after dereferencing pointer ptr is :"<<*ptr<<endl;
    *ptr=33; // Assigning new value to a using pointer;
    cout<<"New value of a is: "<<a<<endl;
    cout <<"New Value of a after dereferencing pointer ptr is :"<<*ptr<<endl;

    //This section demonstrates values of a and b before and after swapping.
    cout <<"Value of a is: "<<a<<endl;
    cout <<"Value of b is: "<<b<<endl;
    swap(&a,&b);
    cout <<"Value of a is: "<<a<<endl;
    cout <<"Value of b is: "<<b<<endl;
    return 0;
}


