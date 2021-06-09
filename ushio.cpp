// ushio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

int main() {
    // Create an output filestream object
    std::ofstream myFile("ushio.csv");

    // Send data to the stream
    myFile << "ushio\n";
    myFile << "1 ushio\n";
    myFile << "2 ushio kai\n";
    myFile << "3 ushio kai ni\n";

    // Close the file
    myFile.close();

    return 0;
}
//once this program is ran, an 'ushio.csv' should be created the same directory as the sln file.


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
