#include <iostream>

int main(int argc, char* args[]) {

    // An average Green Fox attendee codes 6 hours daily
    // The semester is 17 weeks long
    //
    // Print how many hours is spent with coding in a semester by an attendee,
    // if the attendee only codes on workdays.
    //
    // Print the percentage of the coding hours in the semester if the average
    // working hours weekly is 52

    int CodeHours = 6; //Hours
    int Semester = 119; //Days
    float SemesterHours = 119 * 24;

    int SemesterWeekDays = Semester - (17*2);

    std::cout << "Coding hours on workdays Sum: " << CodeHours * SemesterWeekDays << std::endl;

    float WorkingHoursWeekly = 52;

    std::cout << "Percentage of coding hours in semester: " << (SemesterHours / WorkingHoursWeekly) << std::endl;



    return 0;
}