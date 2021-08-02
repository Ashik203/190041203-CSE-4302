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


class threeDimensionalShape:public shape
{
protected:
    double area,volume;
public:
    threeDimensionalShape():area(0),volume(0)
    {
        dimention=3;
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

class circle:public twoDimensionalShape
{

private:
    double rad;
public:
    circle(double rad_=0):rad(rad_)
    {
        name="circle";
    }

    double area()
    {
        return pi * rad * rad;
    }
    double perimeter()
    {
        return 2 * pi * rad;
    }
    void get() const
    {
        cout << rad<< endl;
    }
    void set()
    {
        cout << "circle info : ";
        cin >> rad;
    }


};


class cube:public threeDimensionalShape
{
private:
    double edge;
public:
    cube(double edge_=0):edge(edge_)
    {
        name="cube";
    }
    double area()
    {
        return 6 * edge * edge;
    }
    double volume()
    {
        return edge * edge * edge;
    }
    void get() const
    {

        cout << edge << endl;
    }
    void set()
    {
        cout << "cube info : ";
        cin >> edge;
    }

};

class Sphere:public threeDimensionalShape
{
private:
    double rad;
public:
    Sphere(double rad_=0):rad(rad_)
    {
        name="sphere";
    }
    double area()
    {
        return 4 * pi * rad * rad;
    }
    double volume()
    {
        return (4 / 3.0) * pi * rad* rad * rad;
    }
    void get() const
    {

        cout << rad << endl;
    }
    void set()
    {
        cout << "sphere info : ";
        cin >> rad;
    }


};
class Cylinder : public threeDimensionalShape
{
private:
    double height, rad;
public:
    Cylinder(double height_ = 0, double rad_ = 0) : height(height_), rad(rad_)
    {
        name = "Cylinder";
    }
    double area()
    {
        return 2 * pi * rad * (height + rad);
    }
    double volume()
    {
        return pi * rad * rad* height;
    }
    void get() const
    {

        cout << height << " " << rad << endl;
    }
    void set()
    {
        cout << "cylinder info : ";
        cin >> height >> rad;
    }
};

class cone:public threeDimensionalShape
{
private:
    double rad,height;
public:
    cone(double rad_=0,double height_=0):rad(rad_),height(height_)
    {
        name="cone";
    }
    double area()
    {
        return (pi*rad*(rad + sqrt(height * height + rad * rad)));
    }
    double volume()
    {
        return (pi * rad * rad * height / 3);
    }
    void get() const
    {

        cout << rad << " " << height << endl;
    }
    void set()
    {
        cout << "cone info : ";
        cin >> rad>> height ;
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
    circle c;
    c.set();
    c.get();
    c.whoami();
    cout << c.area() << " " << c.perimeter() << endl;
    cube cb;
    cb.set();
    cb.get();
    cb.whoami();
    cout << cb.area() << " " << cb.volume() << endl;
    Sphere sp;
    sp.set();
    sp.get();
    sp.whoami();
    cout << sp.area() << " " << sp.volume() << endl;
    Cylinder cd;
    cd.set();
    cd.get();
    cd.whoami();
    cout << cd.area() << " " << cd.volume() << endl;
    cone cn;
    cn.set();
    cn.get();
    cn.whoami();
    cout << cn.area() << " " << cn.volume() << endl;

}



