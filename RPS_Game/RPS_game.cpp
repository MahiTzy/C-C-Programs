#include <bits/stdc++.h>
using namespace std;
int main()
{
    int user, comp;
    srand(time(0));
    cout << "\t\t***** ROCK PAPER SCISSORS GAME ****\n\n";
    cout << "PRESS 1 FOR ROCK" << endl;
    cout << "PRESS 2 FOR PAPER" << endl;
    cout << "PRESS 3 FOR SCISSORS" << endl;
    cin >> user;
    if (user == 1)
    {
        cout << "YOU CHOOSE ROCK" << endl;
    }
    else if (user == 2)
    {
        cout << "YOU CHOOSE PAPER" << endl;
    }
    else if (user == 3)
    {
        cout << "YOU CHOOSE SCISSSORS" << endl;
    }
    else
    {
        cout << "INVALID CHOICE!" << endl;
    }
    comp = rand() % 3 + 1;
    if (comp == 1)
    {
        cout << "COMP CHOOSE ROCK" << endl;
    }
    else if (comp == 2)
    {
        cout << "COMP CHOOSE PAPER" << endl;
    }
    else if (comp == 3)
    {
        cout << "COMP CHOOSE SCISSSORS" << endl;
    }
    if (user == comp)
    {
        cout << "IT'S A TIE. PLAY AGAIN!";
    }
    else if (user == 1)
    {
        if (comp == 2)
        {
            cout << "YOU LOSE";
        }
        if (comp == 3)
        {
            cout << "YOU WON";
        }
    }
    else if (user == 2)
    {
        if (comp == 1)
        {
            cout << "YOU WON";
        }
        if (comp == 3)
        {
            cout << "YOU LOSE";
        }
    }
    else if (user == 3)
    {
        if (comp == 1)
        {
            cout << "YOU LOSE";
        }
        if (comp == 2)
        {
            cout << "YOU WON";
        }
    }

    return 0;
}