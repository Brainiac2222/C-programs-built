#include <iostream>
#include <iomanip>

using namespace std;

static const int sizes = 10;
void condition();
int main()
{
    bool airplaneSeats[ sizes ] = {};
    int firstClassCounter = 0;
    int economyCounter = 5;
    bool isFull = true;

    do
    {
        int option;
        cout << "Please type 1 for First Class.\n" <<
        "Please type 2 for Economy." << endl;
        cin >> option;
        cout << endl;

        switch( option )
        {
        case 1:
            if ( firstClassCounter <= 4 )
            {
                airplaneSeats[ firstClassCounter ] = true;
                cout << "First Class: Seat " << firstClassCounter + 1 << endl;
                ++firstClassCounter;
            }
            else
            {
                cout << "First Class is full.\n" << endl;
                int choice;
               cout << "Would you like to Economy.\n" <<
               "1.Yes.\t" << "2.No\t" << endl;
                cin >> choice;
                cout << endl;

                switch( choice )
                {
                case 1:
                    if ( economyCounter <= 9)
                    {
                        airplaneSeats[ economyCounter ] = true;
                        cout << "Economy: Seat " << economyCounter + 1 << endl;
                        ++economyCounter;
                        break;
                    }
                    else
                    {
                        cout << "Economy is also Full." << endl;
                    }
                    break;
                case 2:
                    cout << endl;
                    cout << "Next flight leaves in 3 hours." << endl;
                }
            }

            break;
        case 2:
            if ( economyCounter <= 9 )
            {
                airplaneSeats[ economyCounter ] = true;
            cout << "Economy: Seat " << economyCounter + 1 << endl;
            ++economyCounter;
            }
            else
            {
                cout << "Economy is full." << endl;
                cout << "Next flight leaves in 3 hours" << endl;
            }
            break;
        default:
            cout << "Invalid input" << endl;
            break;

        }

        cout << endl;
        cout << "[ ";
        for ( int i = 0; i < sizes; i++ )
        {
            cout << setw( 4 ) << airplaneSeats[ i ] << ",";
        }
        cout << " ]\n" << endl;

    }while( isFull );
    return 0;
}

