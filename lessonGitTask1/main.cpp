//
//  main.cpp
//  lessonGitTask1
//
//  Created by Valery on 29.01.2025.
//

#include <iostream>
#include <string>

using namespace std;

struct Employee {
    string surname;
    int birthYear;
    string position;
    double salary;
    string education;
};

int main(int argc, const char * argv[]) {
  
    const int SIZE = 5;
    Employee employees[SIZE] = {
        {"Ivanenko", 1958, "Engineer", 25000, "Master's"},
        {"Petrenko", 1970, "Manager", 20000, "Bachelor's"},
        {"Shevchenko", 1962, "Technician", 18000, "Associate's"},
        {"Bondarenko", 1985, "Developer", 30000, "Master's"},
        {"Kovalenko", 1955, "Accountant", 22000, "Bachelor's"}
    };
    
    int currentYear = 2024;
    int count = 0;

    cout << "Employees older than 60 years:\n";
    for (int i = 0; i < SIZE; i++) {
        if (currentYear - employees[i].birthYear > 60) {
            count++;
            cout << "Surname: " << employees[i].surname << "\n"
                 << "Birth Year: " << employees[i].birthYear << "\n"
                 << "Position: " << employees[i].position << "\n"
                 << "Salary: " << employees[i].salary << "\n"
                 << "Education: " << employees[i].education << "\n"
                 << "-------------------------\n";
        }
    }
    return 0;
}
