#include<iostream>

using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    
    public:
        Rectangle() 
        {
            length=0;
            breadth=0;
        }                                  // constructor (non-argument constructor)/default constructor
        Rectangle(int l, int b)
        {
            length = l;
            breadth = b;
        }                                  // parameterized constrctor - this is constructor overloading
        int area()
        {
            return length*breadth;
        }
        int perimeter()
        {
            return (length+breadth)*2;
        }
        int getLength()
        {
            return length;
        }
        void setLength(int l)
        {
            length = l;
        }
        ~Rectangle()
        {
            cout<<"Destructor";
        }                               // destructor
};

int main()
{
    Rectangle r(10, 5);

    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter()<<endl;

    return 0;
}