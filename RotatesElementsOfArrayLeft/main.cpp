#include <iostream>
#include <iomanip>

using namespace std;

void leftRotateByOne( int [] , int );
void leftRotate( int [], int , int );

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof( arr ) / sizeof ( arr[ 0 ] );

    leftRotate( arr, 2, n);

    for ( int i = 0; i < n; i++ )
    {
        cout << arr[ i ] << " ";
    }
    cout << endl;

    cout << sizeof( arr ) << endl;

    return 0;
}

void leftRotate ( int arr[], int k, int n )
{
    for ( int i = 0; i < k; i++ )
    {
        leftRotateByOne( arr, n );
    }
}

void leftRotateByOne ( int arr[], int n )
{
    int temp = arr[ 0 ];
    int i;

    for ( i = 0; i < n - 1; ++i )
    {
        arr[ i ] = arr[ i + 1 ];
    }
    arr[ i ] = temp;
}
