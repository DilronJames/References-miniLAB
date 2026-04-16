#include <iostream> 
#include <cctype>
using namespace std;

void Charfunc (string& abstr) {
    for (int i = 0; i < abstr.length(); i++) {
        abstr[i] = tolower(abstr[i]);
    }

}

int main() {
    string ccpstr = "HELLO";
    Charfunc(ccpstr);
    cout << ccpstr << endl;
}