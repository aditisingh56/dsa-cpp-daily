#include <iostream>
using namespace std;
int main()
{
int n = 5;
int arr[5] = {1, 2, 3, 4, 5};
int maxsum = INT_MIN;
for (int start =0; start < n; start++) {
     int currentsum = 0;
    for (int end = start; end < n; end++) {
        
        currentsum += arr[end];
        maxsum = max(currentsum, maxsum);


        
       
    }

    
}
cout << "Max sum of all subarrays is: " << maxsum << endl;
return 0;
}
