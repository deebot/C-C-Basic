
/* This code also demonstrates the creation of dynamic class object
 * But here the constructor has parameters.
 * This code calculates area using the user inputs and exits when any one of
 * of the two inputs is 0.
 */
#include <iostream>
#include <cstdlib>

using namespace std;

class Rectangle{
   private: double length, width;

	public:
		Rectangle() {};
		Rectangle(double x, double y) : length(x), width(y) {
		cout<<"Constructor is called"<<endl;
		};
        double area()
		{
			return length*width;
		};
};

int main()
{
	Rectangle *R ;
	cout<<"Address is"<<R<<endl;
	int l, w;
	do
	{
		cout << "Length: ";
		cin >> l;
		cout << "Width: ";
		cin >> w;
		if(l==0 || w==0)
			break;

	R = new Rectangle(l,w); //Allocating memory  for object in heap and creating the object.
	cout<<"Address is"<<R<<endl;
	cout << "Area: " << R->area() << endl;
	}while(true);

	//Release memory
	delete R;

	return 0;
};
