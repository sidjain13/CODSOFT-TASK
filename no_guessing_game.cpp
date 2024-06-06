#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    int number, guesses, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;

    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t     Welcome To "<<endl;
    cout<<"\t\t\t\t\t\tNumber Guessing Game";

    cout<<endl;

    do
    {
        cout << "\n\nEnter the no. b/w 1 and 100 : ";
        cin >> guesses;

        if (guesses < number)
        {
            cout << "Higher no. please";
        }
        else if (guesses > number)
        {
            cout << "Lower no. please";
        }
        else
        {
            cout << "You take " << nguesses << " attempts to guesses the number\n\n";
        }
        nguesses++;
    } while (guesses != number);
    return 0;
}
