#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> v;

  v.push_back(3);
  v.push_back(2);
  v.push_back(5);

  cout << v[0] << endl;
  cout << v[1] << endl;
  cout << v[2] << endl;

  cout << "==================" << endl;

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }
  cout << "==================" << endl;

  for (auto x : v) {
    cout << x << endl;
  }
  cout << "==================" << endl;

  cout << v.back() << endl;
  v.pop_back(); // remove last element
  cout << "==================" << endl;

  vector<int> v2 = {2,4,2,5,1};
  vector<int> v3(10);
  vector<int> v4(10, 5);

  string a = "hatti";
  string b = a+a;
  cout << b << "\n"; // hattihatti
  b[5] = 'v';
  cout << b << "\n"; // hattivatti
  string c = b.substr(3,4);
  cout << c << "\n"; // tiva
}