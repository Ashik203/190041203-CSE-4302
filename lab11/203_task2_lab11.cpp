#include<iostream>
#include<cmath>
using namespace std;
double pi=3.1416;
class shape
{
protected:
    string name;
    int dimention;

public:
    shape(string name_="",int dimention_=0):name(name_),dimention(dimention_) {}

    void whoami()
    {
        cout<<"my name is "<<name<<" and my dimention is "<<dimention<<endl;
    }

};

class twoDimensionalShape: public shape
{
protected:
    double area,perimeter;
public:
    twoDimensionalShape():area(0),perimeter(0)
    {
        dimention=2;
    }

};

class Rectangle:public twoDimensionalShape
{
private:
    double length,width;
public:
    Rectangle(double length_=0,double width_=0):length(length_),width(width_)
    {
        name="rectangle";


    }
    double area()
    {
        return length*width;

    }
    double perimeter()
    {
        return 2*(length+width);
    }
    void get()const
    {
        cout<<length<<" "<<width<<endl;
    }
    void set()
    {
        cout<<"rectangle info: ";
        cin>>length>>width;
    }

};

class Square:public twoDimensionalShape
{
private:
    double side;
public:
    Square(double side_=0):side(side_)
    {
        name="square";
    }
    double area()
    {
        return side * side;
    }
    double perimeter()
    {
        return 4 * side;
    }

    void get()const
    {
        cout<<side<<endl;
    }
    void set()
    {
        cout<<"square info: ";
        cin>>side;
    }


};

class Triangle:public twoDimensionalShape
{
private:
    double a,b,c;
public:
    Triangle(double a_=0,double b_=0,double c_=0):a(a_),b(b_),c(c_)
    {
        name="triangle";
    }
    double area()
    {
        double s = (a + b + c) / 2;
        s = s * (s - a) * (s - b) * (s - c);
        return sqrt(s);
    }
    double perimeter()
    {
        return a + b + c;
    }
    void get() const
    {
        cout << a << " " << b << " " << c << "\n";
    }
    void set()
    {
        cout << " triangles info : ";
        cin >> a >> b >> c;
    }

};

int main()
{
    Rectangle r;
    r.set();
    r.get();
    r.whoami();
    cout << r.area() << " " << r.perimeter() << endl;
    Triangle t;
    t.set();
    t.get();
    t.whoami();
    cout << t.area() << " " << t.perimeter() << endl;
    Square s;
    s.set();
    s.get();
    s.whoami();
    cout << s.area() << " " << s.perimeter() << endl;

}



