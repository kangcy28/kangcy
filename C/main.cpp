#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <long long> vec;
void rec(long long n);

int main()
{
    long long a,b,n,m;

    cin>>a>>b;
    rec(0);
    sort(vec.begin(),vec.end());
    n = upper_bound(vec.begin(), vec.end(), b) - vec.begin()-1;//最右邊
    m = lower_bound(vec.begin(), vec.end(), a)-vec.begin();//最左邊
    cout << n - m + 1;
    return 0;
}
void rec(long long n){
    if(n < 1000000000){
        vec.push_back(n);
        rec(n * 10 + 4);
        rec(n * 10 + 7);
    }
}
