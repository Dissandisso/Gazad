#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void print (char hchoice, char cchoice) {
    if (hchoice == cchoice) {
        cout << "Ooopps It is a Tie" << endl;
        if (hchoice == 'r'||hchoice == 'R') {
        cout << "You chose: " << hchoice << " Rock & computer chose: " << cchoice << " Rock"  << endl;
        } 
        else if (hchoice == 's'||hchoice == 'S') {
            cout << "You chose: " << hchoice << " Scissors & computer chose: " << cchoice << " Scissors" << endl;
        } 
        else if (hchoice == 'p'||hchoice == 'P') {
            cout << "You chose: " << hchoice << " Paper & computer chose: " << cchoice << " Paper" << endl;
        }
    }
    else if ((hchoice == 'R'|| hchoice == 'r') && cchoice == 'S') {
        cout << "You win" << endl;
        cout << "You chose: " << hchoice << "-Rock & computer chose: " << cchoice << "-Scissors" << endl;
    }
    else if ((hchoice == 'P'|| hchoice == 'p') && cchoice == 'R') {
        cout << "You win" << endl;
        cout << "You chose: " << hchoice << "-Paper & computer chose: " << cchoice << "-Rock" << endl;
    }
    else if ((hchoice == 'S'|| hchoice == 's') && cchoice == 'P') {
        cout << "You win" << endl;
        cout << "You chose: " << hchoice << "-Scissors & computer chose: " << cchoice << "-Paper" << endl;
    }
    else {
        cout << "You lose" << endl;
        if (hchoice == 'r'||hchoice == 'R') {
        cout << "You chose: " << hchoice << "-Rock & computer chose: " << cchoice << "-Paper"  << endl;
        } 
        else if (hchoice == 's'||hchoice == 'S') {
            cout << "You chose: " << hchoice << "-Scissors & computer chose: " << cchoice << "-Rock" << endl;
        } 
        else if (hchoice == 'p'||hchoice == 'P') {
            cout << "You chose: " << hchoice << "-Paper & computer chose: " << cchoice << "-Scissors" << endl;
        }
    }
}

int main () {
int dice,choice;
char cchoice,hchoice,r,s,p,R,P,S;
do {
cout << "\nRock, Paper & Scissors" << endl;
cout << "1 to Play." << endl;
cout << "2 to Quit." << endl;
cin >> choice;
switch (choice) {
    case 1:
        cout << "Enter your choice:\nR for Rock.\nP for Paper.\nS for Scissors." << endl;
        cin >> hchoice;
        srand(time(0));
        dice = rand()%100+1;
        if (dice < 33)
            cchoice = 'R';
        else if (dice > 33 && dice < 66)
            cchoice = 'P';
        else 
            cchoice = 'S';

        switch (hchoice) {
            case 'R':
            case 'r':
                print (hchoice, cchoice);
                break;
            case 'P':
            case 'p':
                print (hchoice, cchoice);
                break;
            case 'S':
            case 's':
                print (hchoice, cchoice);
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
            }   
        break;
    case 2:
        cout << "Thank you, See you again!" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }
}
while (choice!=2);
return 0;
}