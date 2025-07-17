#include <iostream>
using namespace std;

// Funtion definition.
string changeString(string text);

int main() {
    string text = "DAAAABBBCCKKAABZ";
    
    cout << changeString(text) << endl;
    return 0;
}

// Changes string. Counts each letter appearance and 
// writes Letter + appearance_count. ex. DA4B3C2K2A2BZ
string  changeString(string text) {
    string newString = "";
    char s = text[0]; 
    int count = 1;

    for(int i = 1; i <= text.length(); i++) {
        if(text[i] == s) {
            count += 1;
        }
        else {
            if(count != 1) {
                newString += s;
                newString += (count + '0');
            } else newString += s;

            s = text[i];
            count = 1;
        }
    }
    return newString;
}
