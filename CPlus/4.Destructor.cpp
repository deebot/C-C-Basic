/* This example demonstrates the usage of destructor.
 * If we do not write our own destructor in class,
 * compiler creates a default destructor for us.
 * The default destructor works fine unless we have dynamically allocated memory
 * or pointer in class. When a class contains a pointer to memory allocated in class,
 * we should write a destructor to release memory before the class instance is destroyed.
 * This must be done to avoid memory leak.
 * Also  the object which is created last is destroyed at first i.e destruction of objects of class
 * takes place in the reverse order of creation.
*/

#include <iostream>
#include <cstdlib>
using namespace std;

class Animal
{
private:
    string name;
    float Revenue=0; // Declare and initialize variables
    float Weight=0;
    float DailyPrice=0;
    int Batch_no;
public:
     Animal(){};
     Animal(string n,float r,float w,float d): name(n),Revenue(r),Weight(w),DailyPrice(d){
     cout<<"Constructor with arguments fired.Enter the Batch number"<<endl;
     cin>>Batch_no;
     cout<<"Object with "<<Batch_no<<" created"<<endl;
    }
    ~Animal()
    {
        cout <<"Object with batch no " <<Batch_no<<" Destroyed"<<endl;
    }
    void Request_data(){      //Declaration and definition of the member function Request_data
        cout<<"Enter Animal name"<<endl;
        cin>>name;
        cout << "What is the daily price?"<< endl;
        cin >> DailyPrice;
        cout << "What is the weight of the animal? " << endl;
        cin >> Weight;
    }
    void Calculate_revenue(){ //Declaration and definition of the member function Calculate_revenue{
        Revenue = Weight* DailyPrice;
        cout << "Revenue obtained form animal "<<"("<<name<<"): " << Revenue <<endl;
    }
};
int main()
{
    /*using the constructor with arguments*/
    Animal animal1("Hen",10,10,10);
    Animal animal2("pigeon",10,20,10);
    animal1.Calculate_revenue();
    animal2.Calculate_revenue();
    cout << endl << endl;
    return 0;
}

