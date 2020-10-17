
/*
 *  This code demonstrate the creation of a basic class.
 *  - Private: Only class and friend function can access it
 *  # Protected: Any Derived class can also access.
 *  + Public: Anyone anywhere outside class can access
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
public:
    void Request_data(){      //Declaration and definition of the member function Request_data
        cout<<"Enter Animal name"<<endl;
        cin>>name;
        cout << "How is the daily price?"<< endl;
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
    Animal animal1;
    animal1.Request_data();
    animal1.Calculate_revenue();
    cout << endl << endl;
    system("PAUSE");
	return 0;
}
