#include<iostream>
using namespace std;

/*Member Function Templates & Overloading Template Functions :
1.Member Function Template:
    A class template can have member functions defined outside the class.
While defining an outside member function, we must specify the class template
using Jitendra<T>:: so the compiler knows which class template it belongs to.
2.Function Overloading with Templates:
    When both a normal function and a function template can match a call,
the compiler generally prefers the normal function if both are equally good matches.
*/

template <class T>
class Jitendra
{
public:
    T data;
    Jitendra(T a)
    {
        data = a;
    }
    void display();
};
 
template <class T>
void Jitendra<T> :: display(){ //This is allowed
    cout<<data;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

// Here, func1() is a function template with no separate normal-function overload.
// The compiler deduces T from the argument passed to the function.
template<class T>
void func1(T a){
    cout<<"I am templatised func() "<<a<<endl;
}



int main(){
    // Jitendra<float> j(5.7);
    // Jitendra<int> j(58);
    // Jitendra<char> j('k');
    // cout<<j.data<<endl;
    // j.display();

    func(4);  //Exact match takes the highest priority.
    // Both func(int) and func(T) can accept an int.
    // Since both are exact matches, the non-template function is preferred.

    func1('c');
    // No normal function named func1() exists, so the compiler uses the template.
    // T is deduced as char from the argument 'c'.

    return 0;
}