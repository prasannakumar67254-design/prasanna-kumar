#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    // Create and write to file
    ofstream outfile("students.txt");

    if (outfile.is_open())
    {
        outfile << left << setw(20) << "Name"
                << setw(10) << "Age"
                << setw(10) << "Grade" << endl;

        outfile << left << setw(20) << "Alice"
                << setw(10) << 20
                << setw(10) << 90 << endl;

        outfile << left << setw(20) << "Bob"
                << setw(10) << 22
                << setw(10) << 85 << endl;

        outfile.close();
        cout << "Data written to file successfully." << endl;
    }
    else
    {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    // Open file for reading
    ifstream infile("students.txt");

    if (infile.is_open())
    {
        string name;
        int age, grade;

        // Skip header line
        getline(infile, name);

        cout << "\nStudent Records:\n";
        cout << left << setw(20) << "Name"
             << setw(10) << "Age"
             << setw(10) << "Grade" << endl;

        while (infile >> name >> age >> grade)
        {
            cout << left << setw(20) << name
                 << setw(10) << age
                 << setw(10) << grade << endl;
        }

        infile.close();
        cout << "\nFile read successfully." << endl;
    }
    else
    {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }

    return 0;
}