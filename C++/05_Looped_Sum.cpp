#include <iostream>
using namespace std;

int main() 
{
    int start, end, sum = 0;
    
    cout << "Enter the start of the range: ";
    cin >> start;
    
    cout << "Enter the end of the range: ";
    cin >> end;

    for (int i = start; i <= end; i++) 
    {
        if (i % 3 == 0 && i % 5 == 0) 
        {
            sum += i;
        }
    }

    cout << "Summation of numbers divisible by both 3 and 5: " << sum << endl;

    return 0;
}
