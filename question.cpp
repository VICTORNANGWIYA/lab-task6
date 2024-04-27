#include <iostream>
#include <string>

using namespace std;

int main() {
    int* dynamicallyinteger = nullptr;
    string* dynamicallystring= nullptr;

     dynamicallyinteger = new int;
     dynamicallystring= new string;
    cout << "Enter integer: ";
    cin >> *dynamicallyinteger;
    cout << "Enter string : ";
    cin.ignore();
    getline(cin, *dynamicallystring); 
    cout << "Your dynamically is: " << *dynamicallyinteger << endl;
    cout << "Your dynamicallyinteger is : " << *dynamicallystring << endl;
    delete dynamicallyinteger;
    delete dynamicallystring;

    return 0;
}
