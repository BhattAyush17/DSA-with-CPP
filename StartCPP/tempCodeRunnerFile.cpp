#include <iostream>
#include<string.h>
using namespace std;

//    LCM of three nums
int lcm(int a, int b, int c)
{
    int max= (a>b)?a:b;  max =(max>c)?max:c;
    while(true)
    {
        if(max%a==0 && max%b==0 && max%c==0)
        return max;
        max++;
    }
}

// Prime Factor
void primeFactor(int n) {
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            cout << i << " ";
            n /= i;
        } else {
            i++;
        }
    }
    if (n > 1) {
        cout << n << " ";
    }
 
}


int main() {
    cout << lcm(2, 3, 12) << endl;
    primeFactor(12);
    return 0;
}