#include <iostream>
#include <vector>
using namespace std;
bool isprime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

vector<int> primenumbers(int min, int max) {
    vector<int> primeNumbers;
    for (int num = min; num <= max; num++) {
        if (isprime(num)) {
            primeNumbers.push_back(num);
        }
    }
    return primeNumbers;
}

int main() {
    int min, max;
    cin >> min >> max;
    vector<int> result = primenumbers(min, max);

    for (int prime : result) {
        cout << prime << " ";
    }
    cout << endl;
    return 0;
}
