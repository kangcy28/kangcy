#include <iostream>
#include <algorithm>
using namespace std;
int qq[100005],r[100005];
char p[100005];
int main()
{
    int n,m,i,mi,ma,d,j;

    cin>>n>>m;


    for(i=0;i<m;i++){
        cin>>qq[i];
    }
    sort(qq,qq+m);

    for(j=0;j<n-1;j++)
        cin>>p[j];
    r[0]=0;
    for(int i=0;i<n-1;i++){
        if(p[i]=='R'){
            r[i+1]=r[i]+1;
        }
        else if(p[i] == 'L'){
            r[i+1]=r[i]-1;
        }else{
            r[i+1]=r[i];
        }
    }
    mi = *min_element(r,r+n);
    ma = *max_element(r,r+n);

    d=ma-mi+1;
    if(d>m)
        cout<<"No"<<endl;
    else{
        for(i=0;i<n;i++){

            cout<<qq[r[i]-mi]<<endl;
        }
    }
    return 0;
}
