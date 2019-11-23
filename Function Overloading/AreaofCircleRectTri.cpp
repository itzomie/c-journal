/* this program is coded by Omkar Sulakhe.
the program demonstrates the use of function overloading .
how same function with differnt no of arguments and same name works.*/

#include<iostream>
using namespace std;
const float pi=3.14;
class area{
    float area1,area2,area3;
public :
    void are(float r)
    {
        area1=(pi*r*r);
    }
    void are(float n,float a,float b)
    {
        area2=(n*a*b);
    }
    void are(float lr,float br)
    {
        area3=(lr*br);
    }
    void display()
    {
        cout<<"Area of circle is : "<<area1<<endl;
        cout<<"Area of rectangle is : "<<area3<<endl;
        cout<<"Area of triangle  is : "<<area2<<endl;
    }
};
int main()
{
    float lr,br,c,b,r;
    area a1;
    cout<<"Enter the radius : "<<endl;
    cin>>r;
    cout<<"Enter the length and breadth :"<<endl;
    cin>>lr>>br;
    cout<<"Enter the height and base :"<<endl;
    cin>>c>>b;
    a1.are(r);
    a1.are(0.5,c,b);
    a1.are(lr,br);
    a1.display();
}
