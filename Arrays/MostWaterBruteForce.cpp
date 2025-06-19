#include <vector>
#include <algorithm>
#include <iostream>
#include <climits> 
using namespace std;
int main(){
    vector<int> height={1,8,6,2,5,4,8,3,7};
    int n = height.size();
    int ans=INT_MIN;
    int area;
    int w;
    int h;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            w = j-i;
            h = min(height[i], height[j]);
            area = w * h;
            ans = max(ans, area);

}
    }
    cout << "Maximum area of water that can be contained: " << ans << endl;
    return 0;
    
}