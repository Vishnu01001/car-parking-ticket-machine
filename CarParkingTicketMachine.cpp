#include <iostream>
using namespace std;

class TicketReceipt
{
    float hrs;
    float Ch;

public:
    void getHrs()
    {
        cout << "Enter the Time(in hrs):" << endl;
        cin >> hrs;
    }
    void CalcCharges()
    {
        if (hrs < 0)
        {
            cout << "Invalid Input" << endl;
        }
        else if (hrs <= 2)
        {
            Ch = 50 * hrs;
            return;
        }
        else if (hrs <= 5)
        {
            Ch = 100 + 30 * (hrs - 2);
            return;
        }
        else
        {
            Ch = 100 + 90 + 20 * (hrs - 5);
            return;
        }
    }
    void DisplayTkt()
    {
        cout << "---------Car Parking Ticket---------" << endl;
        cout << "Hours: " << hrs << endl;
        cout << "Total Charges: " << Ch << endl;
        cout << "------------------------------------" << endl;
    }
};

int main()
{
    TicketReceipt ticket;
    ticket.getHrs();
    ticket.CalcCharges();
    ticket.DisplayTkt();

    return 0;
}
