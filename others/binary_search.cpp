#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = { 1, 2, 5, 5, 5, 6, 7, 8, 9 };

    int target = 5;
    int l = 0;
    int r = arr.size()-1;

    while( l<r )
    {
        int mid = l + (r-l)/2;
        if ( arr[mid] > target )
        { 
            r = mid -1; 
        }
        else if ( arr[mid] > target ) 
        { 
            l = mid + 1; 
        }
        else
        { 
            cout << mid << endl; 
            break; 
        }
    }

    cout << "End of the program. END! "<< endl;

    return 0;
}