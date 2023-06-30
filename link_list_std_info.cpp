#include<iostream>
using namespace std;

class pupil {
    public:
    string names;
    string SRCode;
    string SUB;
    string time;
    string prof;
    pupil* next;

};

int main() {
    int studentdno;
    char back;
    int temp=0;

    do {
        cout << "How many students do you want to put in? : ";
        cin >> studentdno;
        cout << "\n\n";

        pupil* head = NULLPTR;
        pupil* tail = NULLPTR;

        for (int i = 0; i < studentdno; i++) {
            pupil* updstudent = new   pupil();

            cout << "\n\n-----Info of Student no. " << i + 1 << "-----";
            cout << "\n\nPlease enter the SRCODE of the student: ";
            cin >> updstudent->SRCode;
            cout << "Please enter the Name of the student: ";
            cin >> updstudent->names; 
            cout << "Please enter the name of the subject: ";
            cin >> updstudent->SUB;
            cout << "Please Enter the name of the professor";
            cin >> updstudent->prof;
            cout << "Enter the time of the subject: ";
            cin >> updstudent->time;

            
        }

        int x;
        cout << "\n\nEnter the SRCode of the student you want to search: ";
        cin >> x;

        pupil* cscreen = head;
     

        while (cscreen != NULLPTR) {
            if (cscreen->SRCode == x) {
                cout << "\n\nName: " << cscreen->names << " SRCODE: " << cscreen->SRCode
                    << " Subjects: " << "Professor" << cscreen->prof << cscreen->SUB << " Time: " << cscreen->time << "\t";
                break;
            }
            cscreen = cscreen->next;
        }

        if (temp == 0)
            cout << "\nThe student identified by the given SRCode does not exist.";

        cout << "\n\nTry Again? [Y/N]: ";
        cin >> back;
        cout << endl << endl;

        head = NULLPTR;
        tail = NULLPTR;

    } while (back == 'y' || back == 'Y');
    return 0;
}
