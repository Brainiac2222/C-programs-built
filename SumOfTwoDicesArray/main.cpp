#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

static const int sizes = 11;

int main()
{
    int frequencyOfSum[ sizes ] = {};

    srand( time( 0 ) );

    for ( int i = 0; i < 3600; i++ )
    {
        int dice1 = 1 + rand() % 6;
        int dice2 = 1 + rand() % 6;

        int sumOfDices = dice1 + dice2;

        switch( sumOfDices )
        {
        case 2:
            frequencyOfSum[ 0 ]++;
            break;
        case 3:
            frequencyOfSum[ 1 ]++;
            break;
        case 4:
            frequencyOfSum[ 2 ]++;
            break;
        case 5:
            frequencyOfSum[ 3 ]++;
            break;
        case 6:
            frequencyOfSum[ 4 ]++;
            break;
        case 7:
            frequencyOfSum[ 5 ]++;
            break;
        case 8:
            frequencyOfSum[ 6 ]++;
            break;
        case 9:
            frequencyOfSum[ 7 ]++;
            break;
        case 10:
            frequencyOfSum[ 8 ]++;
            break;
        case 11:
            frequencyOfSum[ 9 ]++;
            break;
        case 12:
            frequencyOfSum[ 10 ]++;
            break;
        default:
            cout << "Array index out of bounds" << endl;
            break;
        }
    }
    cout << setw( 3 ) << "Sum of Two dices\t" << setw( 8 ) << "Frequencies" << endl;
    cout << setw( 5 ) << "02\t" << setw( 25 ) << frequencyOfSum[ 0 ] << endl;
    cout << setw( 5 ) << "03\t" << setw( 25 ) << frequencyOfSum[ 1 ] << endl;
    cout << setw( 5 ) << "04\t" << setw( 25 ) << frequencyOfSum[ 2 ] << endl;
    cout << setw( 5 ) << "05\t" << setw( 25 ) << frequencyOfSum[ 3 ] << endl;
    cout << setw( 5 ) << "06\t" << setw( 25 ) << frequencyOfSum[ 4 ] << endl;
    cout << setw( 5 ) << "07\t" << setw( 25 ) << frequencyOfSum[ 5 ] << endl;
    cout << setw( 5 ) << "08\t" << setw( 25 ) << frequencyOfSum[ 6 ] << endl;
    cout << setw( 5 ) << "09\t" << setw( 25 ) << frequencyOfSum[ 7 ] << endl;
    cout << setw( 5 ) << "10\t" << setw( 25 ) << frequencyOfSum[ 8 ] << endl;
    cout << setw( 5 ) << "11\t" << setw( 25 ) << frequencyOfSum[ 9 ] << endl;
    cout << setw( 5 ) << "12\t" << setw( 25 ) << frequencyOfSum[ 10 ] << endl;
    cout << endl;

    return 0;
}
