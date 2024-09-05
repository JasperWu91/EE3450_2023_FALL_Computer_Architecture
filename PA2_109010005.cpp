#include <iostream>
using namespace std;

int main() {

    int arr[20] = {450000, 265651, 140362, 71250, 35763, 17899, 8952, 4476, 2238, 1119, 560, 280, 140, 70, 35, 17, 9, 4, 2, 1};


    int x, x_new = 0;
    int y = 0;
    int N = 20;
    int th,t = 0;
    int times = 0;
  
    cin >> times;
    cout << times << endl;

    for(int j = 0; j < times; ++j){
        cin >> th;
        t = th;
        x = 6072529;
        y = 0;
        for (int i = 0; i < N; ++i) {

            if (th >= 0) {
                x_new = x -  ( y >> i ) ;
                y += ( x >> i );
                x = x_new;
                th -= arr[i];
            } else {
                x_new = x + ( y >> i ) ;
                y -= ( x >> i );
                x = x_new;
                th += arr[i];
            }
        }
        
        cout << t << " " << x << " " << y << endl;
    }
   
    return 0;
}
