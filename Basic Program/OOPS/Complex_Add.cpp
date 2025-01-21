#include<iostream>
using namespace std;

class Complex{
public:

        int real;
        int imaginary;

        Complex(int x, int y){
            real=x;
            imaginary=y;
        }

        Complex operator + (Complex &c){

            Complex ans(0,0);
            ans.real= real + c.real;
            ans.imaginary= imaginary + c.imaginary;

            return ans;
        } 
};

int main()
{
    Complex C1(1,2);
    Complex C2(3,4); 

    Complex C3 = C1+C2;

    cout<<C3.real<<" + i"<<C3.imaginary;

    return 0;   
}
