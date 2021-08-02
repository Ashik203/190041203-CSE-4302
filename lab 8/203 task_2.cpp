#include<iostream>
using namespace std;

class seat{

protected:
    bool pleasant,comfy,seatwarmer;

public:
    seat( bool pleasant_=false,bool comfy_=false, bool seatwarmer_=false):pleasant(pleasant_),comfy(comfy_),seatwarmer(seatwarmer_){}
    void getseat() const{
    cout<<"seat info: ";
    cout<<pleasant<<" "<<comfy<<" "<<seatwarmer<<endl;


    }

    void setseat()
    {
        cout<<"set seat info: ";
        cin>>pleasant>>comfy>>seatwarmer;
    }

};

class wheel{

protected:
    double circumference;

public:
    wheel(double circumference_=0):circumference(circumference_){}
    void getwheel() const
    {
        cout<<"wheel info: ";
        cout<<circumference<<endl;

    }
    void setwheel()
    {
        cout<<"set wheel info: ";
        cin>>circumference;
    }

};

class engine{

protected:
    double max_fcr,max_epr,avg_rpm;
public:
    engine(double max_fcr_=0,double max_epr_=0,double avg_rpm_=0):max_fcr(max_fcr_),max_epr(max_epr_),avg_rpm(avg_rpm_){}
    void getengine() const
    {
        cout<<"engine info: ";
        cout<<max_fcr<<max_epr<<avg_rpm<<endl;
    }
    void setengine()
    {
        cout<<"set engine info: ";
        cin>>max_fcr>>max_epr>>avg_rpm;
    }

};


class door{
protected:
    string opening_mode;
public:
    door(string opening_mode_=" "):opening_mode(opening_mode_){}
    void getdoor() const
    {
        cout<<"door info: ";
        cout<<opening_mode<<endl;
    }
    void setdoor()
    {
        cout<<"set door info: ";
        cin>>opening_mode;
    }


};

class car: public seat,public door,public engine,public wheel{

private:
    double max_accelaration,fuel_capacity;
public:
    car(double max_accelaration_=0,double fuel_capacity_=0):max_accelaration(max_accelaration_),fuel_capacity(fuel_capacity_){}
    void getcar()const
    {
        cout<<"car info: ";
        cout<<max_accelaration<<endl;
    }
    void setcar()
    {
        cout<<"set car info: ";
        cin>>max_accelaration>>fuel_capacity;
    }

    void get() const
    {
        getseat();
        getwheel();
        getengine();
        getdoor();
        getcar();
    }
    void set()
    {
        setseat();
        setwheel();
        setengine();
        setdoor();
    }
};

int main()
{
    car c(1);
    c.set();
    c.get();
}

