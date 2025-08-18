#include <iostream>
#include <string>
using namespace std;

void Login();

int main() {
    Login();
}

int attempts = 0;
const int MAX_ATTEMPTS = 5;
string correctUser = "ash";
string correctPass = "15";

void Login() {
    while (attempts < MAX_ATTEMPTS) {
        string user, pass;
        cout << "\nLogin Attempt " << (attempts + 1) << " " << endl;
        cout << "Username: ";
        cin >> user;
        cout << "Password: ";
        cin >> pass;

        if (user == correctUser && pass == correctPass) {
            cout << "Authorized Granting Access" << endl;
            return;
        } else {
            cout << "Authorization Failed" << endl;
            attempts++;
        }
    }

    cout << "\nAccount locked due to too many failed attempts" << endl;
    cout << "Alerting user" << endl;
}

