// First topic -------
// arithmetic operator
#include <iostream>
using namespace std;

int main(){
    
    int num1 = 13;
    int num2 = 10;

    cout << num1 + num2 << endl;
    cout << num1 - num2 << endl;
    cout << num1 * num2 << endl;
    cout << num1 / num2 << endl;
    cout << num1 % num2 << endl;
    
    return 0;
}



// Next topic -------
// unary operator
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    // value is used first, then incremented
    cout << "a++ is " << a++ << endl;
    // value is incremented before its value used
    cout << "++a is " << ++a << endl;
    
    int b = 15;
    // value is used first, then decremented
    cout << "a-- is " << a-- << endl;
    // value is decremented before its value used
    cout << "--a is " << --a << endl;

    return 0;
}



// Next topic -------
// logical operator
#include <iostream>
using namespace std;

int main(){
    
    int a = 10;
    int b = 7;

    // logical && - AND
    cout << (a && b) << endl;

    // logical || - OR
    cout << (a || b) << endl;

    // logical ! - NOT
    cout << ( !b ) << endl;

    return 0;
}



// Next topic -------
// assignment operator
#include <iostream>
using namespace std;

int main(){
    
    // addition assignment operator
    int a = 10;
    a += 5;
    cout << a << endl;

    // subtraction assignment operator
    int b = 10;
    b -= 5;
    cout << b << endl;

    // multiplication assignment operator
    int c = 10;
    c *= 5;
    cout << c << endl;

    // division assignment operator
    int d = 10;
    d /= 5;
    cout << d << endl;

    // modulus assignment operator
    int e = 10;
    e %= 5;
    cout << e << endl;

    return 0;
}



// Next topic -------
// bitwise operator - BITWISE AND(&)
#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 6;

    cout << (a & b);

    return 0;
}



// Next topic -------
// bitwise operator - BITWISE OR(|)
#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 6;

    cout << (a | b);

    return 0;
}



// Next topic -------
// bitwise operator - BITWISE XOR(^)
#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 6;

    cout << (a ^ b);

    return 0;
}



// Next topic -------
// bitwise operator - Left Shift(<<)
#include <iostream>
using namespace std;

int main(){
    int a = 3;

    cout << (a << 1) << endl;
    cout << (a << 2) << endl;

    return 0;
}



// Next topic -------
// bitwise operator - Left Shift(>>)
#include <iostream>
using namespace std;

int main(){
    int a = 3;

    cout << (a >> 1) << endl;
    cout << (a >> 2) << endl;

    return 0;
}



// Next topic -------
// bitwise operator - BITWISE NOT(~)
#include <iostream>
using namespace std;

int main(){
    int a = 3;

    cout << (~a) << endl;

    return 0;
}



// Next topic -------
// last digit of a number
#include <iostream>
using namespace std;

int main(){
    int a = -563;
    int ans = abs(a % 10);

    cout << ans << endl;

    return 0;
}



// Next topic -------
// Comparisin operators
#include<iostream>
using namespace std;

int main()
{
    int x = 10, y = 20 ; 

    cout << (x<y) << "\n"; 
    cout << (x>y) << "\n";
    cout << (x==y) << "\n";
    cout << (x>=y) << "\n";
    cout << (x<=y) << "\n";
    cout << (x!=y) << "\n";

    return 0;
}



// Day before N days
#include<iostream>
using namespace std;

int main(){
    // cuurent day
    int a = 0;

    // days to go back
    int b = 9;

    // cyclic range of N
    int x = b % 7;

    // subtract value from a
    int ans = a - x;

    if(ans >= 0)
        cout << ans;

    else
        cout << ans + 7;

    return 0;

}



// Next topic
// arithmetic progression
// The 5th term
// TN​=A+(N−1)×D
// Tn - nth term to be calculated
// A - first term of series
// N - term number to find
// D - common difference between consecutive terms
// (T5​) = 2+(5-1) x 3 = 2+12=14.
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Starting number
    int a = 2;

    // Common difference
    int d = 1;

    // Nth term to find
    int N = 5;

    // Calculate the Nth term
    int ans = (a + (N - 1) * d);
    
    cout << ans;

    return 0;
}



// Next topic
// geomatric progression
//TN​=A×R(N−1)
// TN​ : The Nth term to be calculated.
// A: The first term of the series.
// R: The common ratio between consecutive terms.
// N: The term number to find.
#include <bits/stdc++.h>
using namespace std;

// CPP Program to find nth term of geometric progression
int main() {
    // Starting number
    int a = 2;

    // Common ratio
    int r = 3;

    // Nth term to be found
    int N = 3;

    // Calculate the Nth term
    int ans = a * (int)(pow(r, N - 1));

    // Display the output
    cout << ans;

    return 0;
}



// Next topic
// sum of natural numbers
#include <iostream>
using namespace std;

// Driver code
int main()
{
    int n = 5;
    int sum = 0;
    for (int x = 1; x <= n; x++)
        sum = sum + x;
    cout << sum;
    return 0;
}