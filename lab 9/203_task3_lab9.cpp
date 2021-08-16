#include<iostream>
using namespace std;
class Furniture {
protected:
  int regular_Price, discounted_Price;
  string material, product_Name;
public:
  Furniture(int rp = 0, int dp = 0, string m = "", string pn = "") : regular_Price(rp), discounted_Price(dp), material(m), product_Name(pn) {}
  void set() {
    cout << "Product Name :";
    cin >> product_Name;
    cout << "Regular Price :";
    cin >> regular_Price;
    cout << "Discounted Price :";
    cin >> discounted_Price;
    cout << "Material :";
    cin >> material;
  }
  void get() {
    cout << "Product Name: " << product_Name << endl;
    cout << "Regular Price :" << regular_Price << endl;
    cout << "Discounted Price :" << discounted_Price << endl;
    cout << "Material :" << material << endl;
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
    cout << "Bed Size :" << bed_Size << "\n";
  }
  void productDetails() {
    get();
    getSize();
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
    cout << "Seat Number :" << seat_Number << "\n";
  }
  void productDetails() {
    get();
    getSofa();
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
    cout << "Chair Count: " << chair_Count << "\n";
  }
  void productDetails() {
    get();
    getCount();
  }
};

int main() {
  Bed b;
  b.setBed();
  b.productDetails();
  Sofa s;
  s.setSofa();
  s.productDetails();
  DiningTable d;
  d.setDiningTable();
  d.productDetails();
}

