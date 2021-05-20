#include<bits/stdc++.h>
using namespace std;
struct point
{
    int x;
    int y;
};
struct line{
    point p1;
    point p2;
};

double cross(point a,point b){
    return a.x*b.y - a.y*b.x;
}
long double getDistanceLP(line l,point p){
    return abs(cross(point{l.p2.x - l.p1.x,l.p2.y-l.p1.y},point{p.x-l.p1.x,p.y-l.p1.y})/sqrt(pow(l.p2.y-l.p1.y,2)+pow(l.p2.x-l.p1.x,2)));
}
int main(){
    point taka;
    int n;
    cin >> taka.x >> taka.y;
    cin >> n;
    vector<line> hen(n);
    vector<point> vec(n);
    long double ans = LDBL_MAX;
    for(int i = 0;i<n;i++){
        int x,y;
        cin >> vec[i].x >> vec[i].y;
    }
    for(int i = 0;i<n-1;i++){
        hen[i].p1.x = vec[i].x;
        hen[i].p1.y = vec[i].y;
        hen[i].p2.x = vec[i+1].x;
        hen[i].p2.y = vec[i+1].y;
    }
    hen[n-1].p1.x = vec[0].x;
    hen[n-1].p1.y = vec[0].y;
    hen[n-1].p2.x = vec[n-1].x;
    hen[n-1].p2.y = vec[n-1].y;
    /*for(auto &i:hen){
        cout << "p1:" << i.p1.x << " " << i.p1.y << "p2:" << i.p2.x << " " <<  i.p2.y << endl;
    }*/
    for(auto &i:hen){
        ans = min(ans,getDistanceLP(i,taka));
    }
    for(int i = 0;i<n;i++){
        ans = min(ans,(long double)sqrt(pow(taka.x-vec[i].x,2)+pow(taka.y-vec[i].y,2)));
    }
    cout << fixed << setprecision(15) << ans << endl;
}