class Solution {
public:
 bool isLeapYear(int year) {
    return (year %4 == 0 && year % 100 !=0) || (year % 400==0);
 }

    int dayOfYear(string date) {
        int year = stoi( date.substr(0 , 4));
    int month = stoi(date.substr(5 , 7));
    int day = stoi(date.substr(8 , 10));

    int daynMonths[] = {31 , 28 , 31, 30 , 31, 30 , 31, 31, 30 , 31, 30 , 31};
    if (isLeapYear(year)) {
        daynMonths[1] = 29;
    }

    int daysTotal = 0;

    for(int i = 0 ; i < month - 1 ; i++) {
        daysTotal += daynMonths[i];
    }
     daysTotal += day;
    return daysTotal;
    }
};