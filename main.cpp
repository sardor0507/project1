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
    return 0;
}