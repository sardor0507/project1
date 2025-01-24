#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    //problem 1
    string name;
    int age;
    cout  <<"Hi, your name please?:";
    cin>>name;
    cout << " How old are you?: ";
    cin>>age;
    cout << name << " you are " << age << " years old." << endl;
    //problem 2
    for (int i = 1; i <= 5; ++i)
        cout << setw(5) << i << endl;
    //problem 3
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    // Swapping the values
    int temp = a;
    a = b;
    b = temp;
    cout << "Swapped values: " << "a = " << a << ", b = " << b << endl;
    //problem 4
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << setw(10) << "Number" << setw(10) << "Square" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << setw(10) << i << setw(10) << i * i << endl;
    }
    return 0;
}