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
/*


*/
/***********************************************************************************************
#include <string>
#include <fstream>
#include <vector>

void write_csv(std::string filename, std::string colname, std::vector<int> vals){
    // Make a CSV file with one column of integer values
    // filename - the name of the file
    // colname - the name of the one and only column
    // vals - an integer vector of values

    // Create an output filestream object
    std::ofstream myFile(filename);

    // Send the column name to the stream
    myFile << colname << "\n";

    // Send data to the stream
    for(int i = 0; i < vals.size(); ++i)
    {
        myFile << vals.at(i) << "\n";
    }

    // Close the file
    myFile.close();
}

int main() {
    // Make a vector of length 100 filled with 69s
    std::vector<int> vec(100, 69);

    // Write the vector to CSV
    write_csv("ushios.csv", "sixty-nine(s)", vec);

    return 0;
}



***********************************************************************************************/
/***********************************************************************************************
* write_csv() to write a vector of integers to a CSV file
* like 1, 2, 3,
* 
* 
/***********************************************************************************************

/***********************************************************************************************

#include <string>
#include <fstream>
#include <vector>
#include <utility> // std::pair

void write_csv(std::string filename, std::vector<std::pair<std::string, std::vector<int>>> dataset) {
    // Make a CSV file with one or more columns of integer values
    // Each column of data is represented by the pair <column name, column data>
    //   as std::pair<std::string, std::vector<int>>
    // The dataset is represented as a vector of these columns
    // Note that all columns should be the same size

    // Create an output filestream object
    std::ofstream myFile(filename);

    // Send column names to the stream
    for (int j = 0; j < dataset.size(); ++j)
    {
        myFile << dataset.at(j).first;
        if (j != dataset.size() - 1) myFile << ","; // No comma at end of line
    }
    myFile << "\n";

    // Send data to the stream
    for (int i = 0; i < dataset.at(0).second.size(); ++i)
    {
        for (int j = 0; j < dataset.size(); ++j)
        {
            myFile << dataset.at(j).second.at(i);
            if (j != dataset.size() - 1) myFile << ","; // No comma at end of line
        }
        myFile << "\n";
    }

    // Close the file
    myFile.close();
}

int main() {
    // Make three vectors, each of length 100 filled with 1s, 2s, and 3s
    std::vector<int> vec1(100, 1);
    std::vector<int> vec2(100, 2);
    std::vector<int> vec3(100, 3);

    // Wrap into a vector
    std::vector<std::pair<std::string, std::vector<int>>> vals = { {"One", vec1}, {"Two", vec2}, {"Three", vec3} };

    // Write the vector to CSV
    write_csv("three_cols.csv", vals);

    return 0;
}
***************************************************************************************/