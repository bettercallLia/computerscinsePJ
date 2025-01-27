#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "please Enter How many numbers do you have in mind?" << '\t';
    cin >> n;
    int numbers[100];
    cout << "please enter the" << n << "numbers";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < i; j++) {
            if (numbers[i] == numbers[j]) {
                found = true;
                break;
            }
        }
            if (!found) {
                int count = 1;
                for (int k = i + 1; k < n; k++) {
                    if (numbers[i] == numbers[k]) {
                        count++;
                    }
                }

                cout << "the frequency of the " << numbers[i] << "equal to : " << count << '\n';
            }
        }
        return 0;
    }
