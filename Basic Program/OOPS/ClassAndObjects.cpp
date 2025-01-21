#include<iostream>
#include<string>
using namespace std;


// CONSTRUCTOR 


class Rectangle{
    public:
    int length ;
    int breadth ; 

    Rectangle()     // Default constructor where no arguments are passed 
    {
        length = 0;
        breadth = 0; 
    }
    Rectangle( int x , int y )  // Parameterised Constructor with arguments 
    {
        length = x;
        length = y;
    }
    Rectangle( Rectangle & r )  // Copy Constructor - initialise an object by another existing object 
    {
        length = r.length ;
        breadth = r.breadth ; 
    }

    ~Rectangle()
    {
        cout<<"Destructor function was called ." ;
    }
};


///  ///
class Fruits {
public :
    string name ;
    string colour;
    
};


int main ()
{
    Fruits f1 ;
    f1.name = "Apple";
    f1.colour = "Red";
    cout << f1.name << endl << f1.colour << endl;


    // Another way to define an object 


    Fruits *f2 = new Fruits();
    f2->name = "Mango" ;
    f2->colour = "Yellow";

    cout << f2->name << endl << f2->colour << endl;


    Rectangle R1 ;
    R1.length = 4 ;
    R1.breadth =5 ;

    cout << R1.length << endl << R1.breadth << endl;
    return 0 ;
}



