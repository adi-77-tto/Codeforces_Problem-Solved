#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        int op= 0, cl= 0;
        for(char c : s) {
            if(c == '(') op++;
            else cl++;
        }
 
        if(op != cl) {
            cout << "NO\n";
            continue;
        }
 
        int balance = 0;
        bool bad = false;
 
        for(char c : s) {
            if(c == '(') balance++;
            else balance--;
            if(balance < 0) bad = true;
        }
 
        cout << "YES\n";
    }
}