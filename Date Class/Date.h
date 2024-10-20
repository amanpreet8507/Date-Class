//
//  Date.h
//  Date Class
//
//  Created by Amanpreet Sandhu on 2024-10-16.
//

#include <string>

class Date {
public:
    // Constructor
    explicit Date(int m, int d, int y) : month{m}, day{d}, year{y} {}

    // Setters
    void setMonth(int m) {
        month = m;
    }

    void setDay(int d) {
        day = d;
    }

    void setYear(int y) {
        year = y;
    }

    // Getters
    int getMonth() const {
        if (month > 12 || month < 1) {
            return 1;  // Default to 1 if month is invalid
        } else {
            return month;
        }
    }

    int getDay() const {
        return day;
    }

    int getYear() const {
        return year;
    }

    // Member function to display the date in "month/day/year" format
    std::string displayDate() const {
        return std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
    }

private:
    int month;
    int day;
    int year;
};
