#include <bits/stdc++.h>

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

