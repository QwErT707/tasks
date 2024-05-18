#include <iostream>
#include <vector>
using namespace std;
vector<int> rec(vector<int> a, vector<int>* del) {

    int max_val = a[0];
    for (int i = 0; i < a.size(); i++) { max_val < a[i] ? max_val = a[i] : max_val = max_val; }
    for (int j = 2; j < max_val; j++) {
        int tmep = 0;
        for (int i = 0; i <= a.size() - 1; i++) {
            if (a[i] % j == 0) { tmep++; }
        }
        if (tmep == a.size()) { del->push_back(j); }
    }
    return *del;
}
int main()
{
    vector <int> a; vector <int> del;
    int b;
    while (cin >> b) { a.push_back(b); }
    rec(a, &del);
    for (int i = 0; i < del.size(); i++) { cout << del[i] << " "; }
    return 0;
}



