#include<iostream>
using namespace std;
class Manager{
protected :
    string name;
    string dept;
    int empid;
    int bonus;
public :
    void getdata()
    {
        cout<<"Enter name : "<<endl;
        cin>>name;
        cout<<"Enter Department : "<<endl;
        cin>>dept;
        cout<<"Enter empid : "<<endl;
        cin>>empid;
    }
    void setbonus(int b)
    {
        bonus=b;
        cout<<"\nDepartment : "<<dept<<"\nBonus : "<<bonus<<endl;
    }
    void display(int n)
    {
        cout<<"\n Name : "<<name<<endl;
        cout<<"\n Department : "<<dept<<endl;
        cout<<"\n No. of employees : "<<n<<endl;
        cout<<"\n Bonus : "<<bonus<<endl;
    }
}; // class manager is defined as base class 
class prodman : public Manager{
    int noOfsup;
public :
    void manageprod(int n)
    {
        noOfsup=n;
        cout<<"\nNo. of supervisors : "<<noOfsup<<endl;
        display(noOfsup);
    }
};// class prod man is declared as derived class
class salesman : public Manager{
    int noOfsalesmen;
public :
    void managesales(int n)
    {
        noOfsalesmen=n;
        cout<<"\nNo. of salesmen : "<<noOfsalesmen<<endl;
        display(noOfsalesmen);
    }
};// class salesman is declared as sderived class 
int main()
{
    prodman p; // decleration of objects of prodman
    salesman s;// decleration of objects 0f salesman
    p.getdata();
    s.getdata();
    p.setbonus(5000);
    s.setbonus(3000);
    p.manageprod(100);
    s.managesales(50);
}
