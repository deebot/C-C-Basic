/* We can define class members static using static keyword.
 * When we declare a member of a class as static it means no matter
 * how many objects of the class are created, there is only one copy of the static member.
 * A static member is shared by all objects of the class.
 * All static data is initialized to zero when the first object is created,
 * if no other initialization is present. We can't put it in the class definition
 * but it can be initialized outside the class as done in the following example by
 * redeclaring the static variable, using the scope resolution operator :: to identify which class it belongs to.
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
    static int no_of_animals;
public:
     Animal(){};
     Animal(string n,float r,float w,float d): name(n),Revenue(r),Weight(w),DailyPrice(d){
     cout<<"Constructor with arguments fired.Enter the Batch number"<<endl;
     cin>>Batch_no;
     cout<<"Object with "<<Batch_no<<" created"<<endl;
     no_of_animals++;
    }
    ~Animal()
    {
        no_of_animals--;
        cout <<"Object with batch no " <<Batch_no<<" Destroyed"<<"remaining object"<<no_of_animals<<endl;

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
int Animal::no_of_animals=0;
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


