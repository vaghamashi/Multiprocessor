#include <iostream>
#include <conio.h>


using namespace std;


//variable class
class value{

    public : 

    int num;

    void operator ++ (){cout << "Enter The Value of A (Increment) : ";
        cin >> num;

        num++;

        cout << "The Valur of A is "<<num;
        }

};

//increment class
class a:public value{

    public :

    void operator ++ ();
};

//increment function
//(101)
void a::operator++(){

    cout << "Enter THe Value of A : ";
    cin >> num;

    cout << "The Value of A after increment is : "<<++num<<endl;
}


//decrement class
    class b:public a{

        public:

        void operator -- ();
    };


//class b function
void b::operator --(){

    cout << "\n\nEnter the value of B : ";
    cin >> num;

    

    cout << "The Value of B after decrement is  "<<--num<< endl;
}


main()
{
    a increment;
    b decrement;

    ++increment;
    --decrement;

    return 0;
}
