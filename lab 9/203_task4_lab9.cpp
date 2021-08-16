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
  int getDP() {
    return discounted_Price;
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

void order(Sofa** s1, Sofa** s2) {
  if ((*s1)->getDP() < (*s2)->getDP()) {
    Sofa* temp = *s1;
    *s1 = *s2;
    *s2 = temp;
  }
}

void bsort(Sofa** s, int n) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      order(s + i, s + j);
    }
  }
}

int main() {
  int n; cin >> n;
  Sofa* s[n];
  for (int i = 0; i < n; ++i) {
    s[i] = new Sofa;
    s[i]->setSofa();
    cout << endl;
  }
  bsort(s, n);
  cout << "The sorted array is: " << endl;
  for (int i = 0; i < n; ++i) {
    s[i]->productDetails();
  }
}

