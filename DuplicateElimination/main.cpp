#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

static const int arraySize  = 20;

int main()
{
    int Arrays[ arraySize ] = {};

    srand( time( 0 ) );

    int counter = 0;

   for( int i = 0; i < arraySize; i++ )
   {
       int randomNum = 10 + rand() % 100;

       bool isDuplicate = false;
       for ( int j = 0; j < counter; ++j )
       {
           if ( Arrays[ j ] == randomNum )
           {
               isDuplicate = true;
               break;
           }
       }

       if ( !isDuplicate )
       {
           Arrays[ counter ] = randomNum;
           counter++;
       }
   }

    cout << "The unique values entered are: " << endl;
    cout << "[ ";
    for ( int i = 0; i < arraySize; i++ )
    {
        cout << setw( 3 ) << Arrays[ i ] << ", ";
    }
    cout << "] ";
    cout << endl;
    return 0;
}
