#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,y;
    cin >> n >> y;
    for(int yu = 0;yu<=n;yu++){
        for(int h = 0;h<=n-yu;h++){
            /*if(yu==14&&h==27){
                cout << yu << " " << h << " " << n-yu-h << endl;
                cout << yu*1000+h*5000+(n-yu-h)*1000 << endl;
            }*/
            if(yu*10000+h*5000+(n-yu-h)*1000==y){
                cout << yu << " " << h << " " << n-yu-h << endl;
                return 0;
            }
        }
    }
    cout << -1 << " " << -1 << " " << -1 << endl;
}