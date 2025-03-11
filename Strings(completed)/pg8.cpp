/* 8. Program to Convert Enum to String. */

#include <iostream>
#include <string>

using namespace std;

enum Color { RED, GREEN, BLUE };

string enumToString(Color color) {
    switch (color) {
        case RED:
            return "RED";
        case GREEN:
            return "GREEN";
        case BLUE:
            return "BLUE";
        default:
            return "UNKNOWN";
    }
}

int main() {
    Color color = GREEN;
    cout << "Enum value: " << enumToString(color) << endl;
    return 0;
}



/*  

output 

Enum value: GREEN

*/