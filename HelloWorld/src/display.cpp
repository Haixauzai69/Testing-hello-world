/*
 * display.cpp
 *
 *  Created on: Oct 23, 2025
 *      Author: HaiPH
 */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    cout << setiosflags(ios::left)
         << setw(5) << "ID"
         << setw(10) << "Name"
         << setw(20) << "MaxGeschwindigkeit"
         << setw(15) << "Gesamtstrecke"
         << resetiosflags(ios::left)  // reset to normal
         << endl;

    cout << string(50, '-') << endl;
}




