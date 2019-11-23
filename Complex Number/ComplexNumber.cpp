 /*this code is coded by Omkar Sulakhe

In this program we perform simple addition of two complex numbers
Input : 2 complex number
Output : The output is a complex number */
#include<iostream>
using namespace std;
class Complex  //complex definition
{
private :
    int re,im;
public :
    void getdata() //to read data from user
    {
        cout<<"Enter the complex number :"<<endl;
        cin>>re;
        cin>>im;
    }
    void showdata()// display function
    {
        cout<<re<<"+"<<im<<"i"<<endl;
    }
    void add(Complex c1,Complex c2)
    {
        re=c1.re+c2.re;//real values are added separately
        im=c1.im+c2.im;//complex values are added separately
    }
};
int main()
{
    Complex c1,c2,c3; //objects are create
    c1.getdata();
    cout<<"The first complex number is : "<<endl;
    c1.showdata();
    c2.getdata();
    cout<<"The second complex number is : "<<endl;
    c2.showdata();
    c3.add(c1,c2);// the add function is called using c3
    cout<<"The sum of two complex numbers is :"<<endl;
    c3.showdata();
}
