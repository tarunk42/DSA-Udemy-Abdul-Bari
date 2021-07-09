#include<iostream>

using namespace std;

template<class T>
class Arithmetic
{
private:
    T a;
    T b;
public:
    Arithmetic(T a, T b);
    T add();
    T sub();

};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b)        // inside scope resolution
{
    this->a=a;  // for private data member a - this.a
    this->b=b;
}
template<class T>
T Arithmetic<T>::add()
{
    T c;
    c = a+b;
    return c;
}
template<class T>
T Arithmetic<T>::sub()
{
    T c;
    c=a-b;
    return c;
}


int main()
{
    
    Arithmetic<char> ar('B','A');

    cout<<"Add: "<<(int)ar.add()<<endl<<"Sub: "<<(int)ar.sub()<<endl;

    return 0;
}