#include <iostream>
using namespace std;
int main() {
   /* for (int i = 1; i <= 10; ++i) {
        cout << i << " ";
    }*/

   /* int N;
    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        cout << i << " ";
    }*/


   /* int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    cout << "Sum of first 10 natural numbers is: " << sum << std::endl;*/

    /*int N;
    cout << "Enter a number: ";
    cin >> N;

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
    sum += i;
    }
    cout << "Sum of first " << N << " natural numbers is: " << sum << std::endl; */


    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    double average = sum / 10.0;
    cout << "Average of first 10 natural numbers is: " << average << std::endl;

    return 0;
}
