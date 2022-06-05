#include <bits/stdc++.h>

using namespace std;

bool comp(string a, string b) {
  if (a.size() != b.size()) return a.size() < b.size();
  return a < b;
}

int main() {
  vector<int> v = {4, 2, 5, 3, 5, 8, 3};
  sort(v.begin(), v.end());

  for (int i = 0; i < v.size(); i++) {
    cout << v.at(i) << endl;
  }

  int a[] = {4, 2, 5, 3, 5, 8, 3};
  sort(a, a + 7);

  cout << "==================" << endl;

  for (int i = 0; i < 7; i++) {
    cout << a[i] << endl;
  }

  cout << "==================" << endl;

  string s = "monkey";
  sort(s.begin(), s.end());

  cout << s << endl;

  cout << "==================" << endl;

  struct P {
    int x, y;
    bool operator<(const P &p) {
      if (x != p.x) return x < p.x;
      return y < p.y;
    }
  };

  vector<P> points = {{x: 2, y: 4}, {x: 1, y: 2}, {x: 2, y: 1}};
  sort(points.begin(), points.end());

  for (int i = 0; i < points.size(); i++) {
    cout << points.at(i).x << "," << points.at(i).y << endl;
  }

  cout << "==================" << endl;

  vector<string> strings = {"Raphael", "Collin", "Teles"};
  sort(strings.begin(), strings.end(), comp);

  for (int i = 0; i < strings.size(); i++) {
    cout << strings.at(i) << endl;
  }
}