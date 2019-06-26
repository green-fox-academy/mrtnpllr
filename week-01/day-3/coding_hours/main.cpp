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

    int codeHours = 6; //Hours
    int semester = 17*7; //Days
    float semesterHours = semester * 24;

    int semesterWeekDays = semester - (17*2);

    std::cout << "Coding hours on workdays Sum: " << codeHours * semesterWeekDays << std::endl;

    float workingHoursWeekly = 52;
    float workingHoursSum = 52 * 17;

    std::cout << "Percentage of coding hours in semester: " << (workingHoursSum / semesterHours) * 100 << " %" << std::endl;

    return 0;
}