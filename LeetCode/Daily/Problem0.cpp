#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define ush unsigned short
#define el '\n'
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() 
{
   int w,h,x,y,E,x1,x2,y1,y2;
   string ss;

   cin>>w>>h>>x>>y>>E>>x1>>y1>>x2>>y2>>ss;

   int steps =0;
   string STATUS = "DONE";

   for (char s : ss){

    if(E==0){
        STATUS = "EMPTY";
        break;}

    int newx=x,newy=y;

    if (s == 'N') newy++;
    if (s == 'S') newy--;
    if (s == 'E') newx++;
    if (s == 'W') newx--;

    if ( newx < 0 || newx >= w || newy < 0 || newy >= h){
        STATUS = "WALL";
        break;
    }

    if ( (newx >= x1) && (newx <= x2) && (newy <= y2) && (newy >= y1))
    {
        STATUS="BLOCKED";
        break;
    }
    
    x = newx;
    y = newy;
    E--;
    steps++;
    }
    cout<<STATUS<<" "<<x<<" "<<y<<" "<<E<<" "<<steps<<el;
   }
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    while(t--){
        solve();
    }
    return 0;
}