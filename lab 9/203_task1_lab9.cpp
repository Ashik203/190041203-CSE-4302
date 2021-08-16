#include<iostream>
using namespace std;
class Furniture {
protected:
  int regular_Price, discounted_Price;
  string material;
public:
  Furniture(int rp = 0, int dp = 0, string m = "") : regular_Price(rp), discounted_Price(dp), material(m) {}
  void set() {
    cout << "Regular Price :";
    cin >> regular_Price;
    cout << "Discounted Price :";
    cin >> discounted_Price;
    cout << "Material :";
    cin >> material;
  }
  void get() {
    cout << "Regular Price :" << regular_Price << endl;
    cout << "Discounted Price :" << discounted_Price << endl;
    cout << "Material :" << material <<endl;
  }
};

class Bed : public Furniture {
private:
  string bed_Size;
public:
  Bed(string bs = "") : bed_Size(bs) {
  }
  void set_Size() {
    cout << "Bed Size: ";
    cin >> bed_Size;
  }
  void setBed() {
    set();
    set_Size();
  }
  void getSize() {
    cout << "Bed Size :" << bed_Size << endl;
  }
};

class Sofa : public Furniture {
private:
  string seat_Number;
public:
  Sofa(string sn = "") : seat_Number(sn) {}
  void set_Number() {
    cout << "Seat Number: ";
    cin >> seat_Number;
  }
  void setSofa() {
    set();
    set_Number();
  }
  void getSofa() {
    cout << "Seat Number :" << seat_Number << endl;
  }
};

class DiningTable : public Furniture {
private:
  string chair_Count;
public:
  DiningTable(string cc = "") : chair_Count(cc) {}
  void setCount() {
    cout << "Chair Count: ";
    cin >> chair_Count;
  }
  void setDiningTable() {
    set();
    setCount();
  }
  void getCount() {
    cout << "Chair Count: " << chair_Count << endl;
  }
};

int main() {
  Bed b;
  b.setBed();
  Sofa s;
  s.setSofa();
  DiningTable d;
  d.setDiningTable();
}

