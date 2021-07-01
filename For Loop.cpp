#include <bits/stdc++.h>

using namespace std;#include <bits/stdc++.h>

using namespace std;
/*******************
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : For Loop
LINK : https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
*******************/

int main()
{
    char a[][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int x, y;
    cin >> x >> y;
    for(int i = x; i <= y; ++i){
        if(i <= 9){
            cout << a[i - 1] << endl;
        }
        else if(i % 2 == 0){
            cout << "even" << endl;
        }
        else{
            cout << "odd" << endl;
        }
    }
    return 0;
}


/*******************
NAME : DIPU BISWAS
JUST CSE 2019 - 2020
PROBLEM CODE : Functions
LINK : https://www.hackerrank.com/challenges/c-tutorial-functions/problem?h_r=next-challenge&h_v=zen
*******************/
int ret(int a, int b, int c, int d){
    if(a >= b && a >= c && a >= d)
        return a;
    else if(b >= a && b >= c && b >= d)
        return b;
    else if(c >= a && c >= b && c >= d)
        return c;
    else
        return d;
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << ret(a, b, c, d) << endl;
    return 0;
}

