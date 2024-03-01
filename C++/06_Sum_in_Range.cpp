#include <iostream>
using namespace std;

int main() 
{
    int start, end, sum_even = 0, sum_odd = 0;
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    
    for (int i = start; i <= end; i++) 
    {
        if (i % 2 == 0) 
        {
            sum_even += i;
        } 
        else 
        {
            sum_odd += i;
        }
    }
    
    cout << "Sum of even numbers: " << sum_even << endl;
    cout << "Sum of odd numbers: " << sum_odd << endl;

    return 0;
}
