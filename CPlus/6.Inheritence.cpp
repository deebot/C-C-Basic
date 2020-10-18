/* This code demonstrate inheritance.
 *Private data members of class are never directly accessed in the derived class nor anywhere else in the code.
 *Protected access modifier is similar to that of private access modifiers,
 *the difference is that the class member declared as Protected are inaccessible
 *outside the class but they can be accessed by any subclass(derived class) of that class.
 */

#include <iostream>
#include <cstdlib>
using namespace std;

class Person
{
private:
    string name;
    string lastname;
    int age;
protected:
    string type="P";
public:
    Person(string n,string l,int a):name(n),lastname(l),age(a){
       cout <<"Created a new object with name "<<name <<endl;
    }
    void whoami(){

    cout <<"I am a person "<< type<<endl;
    }
};

class Customer: public Person
{
private:
    int customerNo;
public:
    Customer(string n,string l,int a,int c):Person(n,l,a),customerNo(c)
    {
        type='c';
    }
    void getData()
    {
        cout <<"Type is "<<type<<endl;
    }

    void whoami(){

    cout <<"I am a customer. The type is: "<< type<<endl;
    }
};
class Employee: public Person
{
private:
    int employeeNo;
    float income;
public:
    Employee(string n,string l,int a,int e,float i):Person(n,l,a),employeeNo(e),income(i)
    {
        type='e';
    }
    void getData()
    {
        cout <<"Type is "<<type<<endl;
    }
    /* Function override is used here. If the derived class has function with same name, return type and
     * arguments then the function from derived class is run whenever  the object of derived class is used to call the
     * function.
     */
    void whoami(){

        cout <<"I am a employee. The type is: "<< type<<endl;
    }
};
int main()
{
    Person P1("Deepankar","Maithani",34);
    Customer C1("john","Bauer",30,100);
    C1.whoami();
    Employee E1("Joe","schnider",30,105,1000);
    E1.whoami();
    return 0;
}


