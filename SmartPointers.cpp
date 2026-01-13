#include<iostream>
#include<memory> // For smart pointers
using namespace std;

int main()
{
    unique_ptr <int> unqPtr(new int(50));
    unique_ptr <int> unqPtr2 = make_unique<int>(500);

    cout<<"unqPtr : "<<*unqPtr<<endl;
    unqPtr2 = move(unqPtr);

    cout<<"unqPtr : "<<*unqPtr<<endl;
    cout<<"unqPtr2 : "<<&unqPtr<<endl;
    return 0;

}