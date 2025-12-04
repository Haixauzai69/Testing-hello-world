/*
 * display.cpp
 *
 *  Created on: Oct 23, 2025
 *      Author: HaiPH
 */
#include <iostream>
#include <iomanip>
#include <string>


int main() {
//    cout << setiosflags(ios::left)
//         << setw(5) << "ID"
//         << setw(10) << "Name"
//         << setw(20) << "MaxGeschwindigkeit"
//         << setw(15) << "Gesamtstrecke"
//         << resetiosflags(ios::left)  // reset to normal
//         << endl;
//
//    cout << string(50, '-') << endl;
	std::cout << "I love you too!" << std::endl;

	for (int i = 0; i < 1000 ; i++)
	{
		if ((i % 5 == 3) && (i % 7 == 4) && (i % 9 == 5))
		{
			std::cout << "Answer: " << i << std::endl;
			return i;
		}
	}
}




