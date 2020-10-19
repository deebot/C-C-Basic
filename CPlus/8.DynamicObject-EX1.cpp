
/* This code demonstrates the creation of dynamic class object
 * A dynamic object is allocated memory on the heap. And user need to explicitly
 * delete the object and clear the memory.
 * A dynamic object is created using runtime.
 */
#include <iostream>
#include <cstdlib>
using namespace std;
class Car
{
private:
    string brand;
public:
    Car()
    {
        brand="BRAND";
        cout<<"Created"<<endl;
    }
    ~Car()
    {
        cout<<"Deleted"<<endl;
    }
    void getBrand()
    {
        cout<<"The brand is: "<<brand <<endl;
    }

};
int main()
{
    //Normal object of class
    Car NormalCar;
    NormalCar.getBrand();
    Car *dobj;
    // A contiguous Memory block for the dynamic object of car class has been allocated and address of base is stored in pointer dobj.
    dobj=new Car();
    //Calling member function using dynamic object
    (*dobj).getBrand();
    //Another way to call the member function
    dobj->getBrand();
    delete dobj;
    return 0;

}



