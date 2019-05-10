#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<string> numbers;
    int N, count = 0;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        string a;
        cin >> a;
        cin >> a;
        cin >> a;
        a = a.substr(7, 8);

        int size = numbers.size();
        bool ex = false;
        for (int j = 0; j < size; ++j) {
            if (a == numbers[j]){
                count++;
                ex = true;
                break;
            }
        }

        if (!ex){
            count++;
            numbers.push_back(a);
        }
    }

    cout << (double)count / (double)numbers.size();

    return 0;
}