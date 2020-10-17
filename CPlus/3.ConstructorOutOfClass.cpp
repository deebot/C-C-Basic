
/*
 *  This code demonstrate the function of constructor.
 *  A constructor is a fuction that runs when the object of
 *  a class is created.  It has same name as class Name.
 *  It is used to provide some default values to the data members of class
 *  or to enable passing values by user when creating a class object.
 *  In the example below there are two constructors one which takes arguments and the other
 *  that doesnot take any arguments.
 *  Author: Deepankar Maithani
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
     Animal(string n,float r,float w,float d);
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

Animal::Animal(string n,float r,float w,float d)
{
    name=n;
    Revenue=r;
    Weight=w;
    DailyPrice=d;
    cout<<"Constructor with arguments fired.Enter the Batch number"<<endl;
    cin>>Batch_no;
    cout<<"Object with Batch No "<<Batch_no<<" created"<<endl;
}
int main()
{
    Animal animal1;
    animal1.Request_data();
    animal1.Calculate_revenue();
    /*using the constructor with arguments*/
    Animal animal2("Hen",10,10,10);
    animal2.Calculate_revenue();
    cout << endl << endl;
    system("PAUSE");
	return 0;
}




