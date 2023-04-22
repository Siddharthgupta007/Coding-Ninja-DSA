#include<iostream>
using namespace std;
class ComplexNumbers{
    private:
    int realpart;
    int imaginary;
    public:

    ComplexNumbers(int realpart, int imaginary) {
      this->realpart = realpart;
      this->imaginary = imaginary;
    }

    void plus(ComplexNumbers c2)
    {
        this->realpart = this->realpart + c2.realpart;
        this->imaginary =this->imaginary + c2.imaginary;

    }

    void multiply(ComplexNumbers c2)
    {
        int temp1 = this->realpart;
        int temp2= this->imaginary;
        this->realpart = (realpart*c2.realpart) - (imaginary * c2.imaginary);
        this->imaginary = (temp1*c2.imaginary) + (temp2*c2.realpart);

    }
    void print()
    {
        if(imaginary<0)
        cout<<realpart<<" - "<<"i"<<-1*imaginary<<endl;
        else
       cout<<realpart<<" + "<<"i"<<imaginary<<endl;
    }
    
};





 

