#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int randomNumber;;
    int guess;
    int chances=0;
    srand(time(0));
    randomNumber=rand()%100+1;
    cout << "\t\t\tWelcome To The Guessing Game\n\n";

    do{
        cout << "Enter your guess between 1 to 100: "<<endl;
        cin >> guess;
        chances++;

        if(guess > randomNumber){
            cout << "The guess "<<guess<<" is too high!"<<endl;
        }
        else if (guess < randomNumber)
        {
            cout << "The guess "<<guess<<" is too low!"<<endl;
        }
        else{
            cout << "You Got the right guess "<<guess<<" in "<<chances<<" times!";
        }
    } 
    while (guess != randomNumber);
    

    return 0;
}