#include <iostream>
using namespace std;

// Gets the height and width of the rectangle and 
// draws it with simple loops.
void drawARectangle(int height, int width) {
    cout << '/';
    for(int c = 1; c <= width - 2; c++) {
        cout << '*';
    }
    cout << "\\" << endl;

    for(int r = 0; r < height - 2; r++) {
        cout << '*';
        for(int c = 1; c <= width - 2; c++) {
            cout << ' ';
        }
        cout << '*' << endl;
    }

    cout << "\\";
    for(int c = 1; c <= width - 2; c++) {
        cout << '*';
    }
    cout << '/' << endl;
}

int main() {
    int height, width;

    cout << "Enter the height: ";
    cin >> height;

    cout << "Enter the width: ";
    cin >> width;

    if(height < 2 || width < 2) {
        cout << "The rectangel sizes must be greater than 1." << endl;
    } else drawARectangle(height, width);

    return 0;
}
