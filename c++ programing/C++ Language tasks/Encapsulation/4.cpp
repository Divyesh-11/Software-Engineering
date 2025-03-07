#include <iostream>

using namespace std;
class date
{
private:
    int date;
    string month;
    int year;

public:
    int count = 0;
    void set()
    {
        int date, year, month;

        cout << "\nEnter the date = ";
        cin >> date;

        cout << "\nEnter the month = ";
        cin >> month;

        cout << "\nEnter the year = ";
        cin >> year;

        if (year % 4 == 0 && month == 2 && (date >= 1 && date <= 29))
        {
            this->date = date;
            this->month = "February";
            this->year = year;
        }
        else if (month == 2 && (date >= 1 && date <= 28))
        {
            this->date = date;
            this->month = "February";
            this->year = year;
        }
        else if ((month == 4 || month == 6 || month == 9 || month == 11) && (date >= 1 && date <= 31))
        {
            this->date = date;
            switch (month)
            {
            case 4:
                this->month = "April";
                break;
            case 6:
                this->month = "june";
                break;
            case 9:
                this->month = "sptember";
                break;
            case 11:
                this->month = "November";
                break;
            }
            this->year = year;
        }
        else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 10 || month == 8 || month == 12) && (date >= 1 && date <= 30))
        {
            this->date = date;
            switch (month)
            {
            case 1:
                this->month = "january";
                break;
            case 3:
                this->month = "march";
                break;
            case 5:
                this->month = "Mey";
                break;
            case 7:
                this->month = "july";
                break;
            case 8:
                this->month = "August";
                break;
            case 9:
                this->month = "sptember";
                break;
            case 10:
                this->month = "Octomber";
                break;
            case 12:
                this->month = "December";
                break;
            }
            this->year = year;
        }
        else
        {
            count++;
        }
    }
    void get()
    {
        if (count == 0)
        {
            cout<< endl << date << " - " << month << " - " << year << endl;
        }
        else
        {
            cout << "\nInvaild date formate.";
        }
    }
};
int main()
{
    date d1, d2;

    d1.set();
    d2.set();
    d2.get();
    d1.get();
    return 0;
}