#include <vector>
#include <iostream>

using namespace std;


int main(){
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    int rot = k%n;
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    for(int a0 = 0; a0 < q; a0++){
        int m;
        cin >> m;
        if (m-rot >= 0) {
            cout << a[m-rot] << endl;
        } else {
            cout << a[m-rot+n] << endl;
        }
    }
    return 0;
}