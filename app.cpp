#include <iostream>

using namespace std;

int main(){
    string username;
    string pin;
    string pinCheck;

    cout << "enter username\n";
    getline(cin, username);

    cout << username << ", please enter your new Password!\n";
    getline(cin, pin);

    system("clear");

    cout << username << ", Please login with your password\n";
    cout << "Password : ";
    getline(cin, pinCheck);

    if (pin != pinCheck){
        cout << "validation error\n";
    } else {
        cout << "validation success\n";
    }

    return 0;
}
