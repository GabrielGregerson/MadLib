#include <iostream>
#include <conio.h>

using namespace std;

struct Entries {
	string type;
	string input;
};


int main()
{
    Entries entries[] = {
    {"Famous person", ""},
    {"Animal", ""},
    {"Place", ""},
    {"person", ""},
    {"place", ""},
    {"Object", ""},
    {"Place", ""},
    {"Animal", ""},
    {"Famous Person", ""},
    {"Restaurant", ""},
    {"Restaurant", ""},
    {"Food", ""}
    };

    for (int i = 0; i < 12; i++)
    {
        cout << "Please enter a " << entries[i].type << ": ";
        cin >> entries[i].input;
    }

    char FixInput;
    do {
        cout << "Do you wawnt to fix any words? (y/n): ";
        cin >> FixInput;

        if (FixInput == 'y' || FixInput == 'Y') {
            int FixIndex;
                cout << "Which word do you want to fix? (1-12): ";
                cin >> FixIndex;

                if (FixIndex >= 1 && FixIndex <= 12) {
                    cout << "Please enter a " << entries[FixIndex - 1].type << ": ";
                    cin >> entries[FixIndex - 1].input;
                }
        }

    } while (FixInput == 'y' || FixInput == 'Y');

    cout << "\nYour Mad Lib:\n";
    cout << "Yesterday, I ran into " << entries[0].input << "\n and saw his adorable " << entries[1].input
         << " pet, Then we went to " << entries[2].input << "\n And we ran into " << entries[3].input
        << " At " << entries[4].input << "\n He was also holding a " << entries[5].input << " Which was weird? Anyway Then we headed to "
         << entries[6].input << " And saw the wild " << entries[7].input << "\n Break dancing in the streets with " << entries[8].input
        << " Then we went to get ice cream at " << entries[9].input << "\n but they ran out of ice cream once we got there and decided to try out " << 
        entries[10].input << " But they only sell " << entries[11].input;



    (void)_getch();
	return 0;
}