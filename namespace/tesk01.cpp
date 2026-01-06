#include <iostream>
using namespace std;

namespace hassan {
    string UserName(string Name) {
        cout << "My name is: " << Name << endl; 
        return Name; 
    }
}

int main() {
    string userName;
    cout << "Enter your name: ";
    cin >> userName;

    string result = hassan::UserName(userName); 
    return 0;
}

