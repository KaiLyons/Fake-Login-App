#include <iostream>

using namespace std;

int main(){
    string username;
    string pin;
    string pinCheck;

    cout << "enter username\n" << endl;
    getline(cin, username);

    cout << username << ", please enter your new Password!\n" << endl;
    getline(cin, pin);

    system("clear");

    cout << username << ", Please login with your password\n" << endl;
    cout << "Password" << endl;
    getline(cin, pinCheck);

    if (pin != pinCheck){
        cout << "validation error" << endl;
    } else {
        cout << "validation success" << endl;
    }

    return 0;
}
