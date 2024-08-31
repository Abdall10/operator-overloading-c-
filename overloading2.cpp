#include <iostream>       
using namespace std;     

class Test 
{
    private:
        int a = 0;        
    public:
    Test() 
    {
        cout << "Enter the value of a: " << endl; 
        cin >> a;                              
    }


    void print() 
    {
        cout << "The value of a is: " << a << endl;
    }


      void operator +=(int b) 
    {
        a += b;     // It is not necessary that operator +=(int b) That a += b; It can be a-= , a*=, a/=, a%= .....
    }
      void operator -=(int b) 
    {
        a -= b;  
    }
      void operator *=(int b) 
    {
        a *= b;  
    }
      void operator %=(int b) 
    {
        a %= b;  
    }
      void operator /=(int b) 
    {
        a /= b;  
    }
};

int main() 
{
    Test ob1;       
   //  ob1 += 10;          
   //  ob1 -= 5;
   //  ob1 *= 5;
    ob1 %= 2;
   // ob1 /= 4;
    ob1.print();
    return 0;         
}