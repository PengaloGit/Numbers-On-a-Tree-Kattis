#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int inter_min(int n,int sz)
{
    int sum = 0  ;
    for(int i = n ; i>sz ; i-- )
        sum+=pow(2,i);
    return sum ;
}

int inter_max(int n , int sz )
{

    int sum = 0  ;
    for(int i = n ; i>=sz ; i-- )
        sum+=pow(2,i);
    return sum ;
}

int main()
{
    int n;
    int inter[2];
    string str ;
    cin >> n ;
    getline(cin , str);

    str.erase(0,1);

    inter[0]=inter_min(n,str.size());

    inter[1]=inter_max(n,str.size());

    cout << inter[1] << " " << inter[0] << endl ;
    while(!str.empty())
    {
        if (str[0]=='R')
            inter[1]-=(inter[1]-inter[0])/2 ;
        else if (str[0]=='L')
            inter[0]+=(inter[1]-inter[0])/2 ;
        str.erase(0,1);
    }

    cout << inter[1];


}
