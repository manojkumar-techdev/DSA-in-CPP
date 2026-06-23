// First topic -------
// input - single value
#include <iostream>
using namespace std;

int main()
{
    int age;
    // user input
    cin >>age;
    cout << age << endl;

	return 0;
}




// Next topic -------
// input - multiple value
#include <iostream>
using namespace std;

int main()
{
    int age;
    string name;
    // user input
    cin >> age >> name;

    cout << age << endl;
    cout << name << endl;

	return 0;
}




// Next topic -------
// output- multiple values
#include <iostream>
using namespace std;

int main()
{
    int age = 100;
    cout << age << endl;

	return 0;
}




// Next topic -------
// output- multiple values
#include <iostream>
using namespace std;

int main()
{
    int age;
    string name;
    // user input
    cin >> age >> name;

    cout << age << endl;
    cout << name << endl;

	return 0;
}




// Next topic -------
// escape sequence - newline
#include <iostream>
using namespace std;

int main()
{
    // add new line
    cout << "Hello\nWorld!";

    return 0;
}




// Next topic -------
// escape sequence - tab
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello\tWorld!";

    return 0;
}




// Next topic -------
// backspace
// cursor moves one position back before printing
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello\bWorld!";

    return 0;
}




// Next topic -------
// carriage return
// starts printing from the beginning of the line 
// overwrites beginning characters
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello\rWorld!";

    return 0;
}




// Next topic -------
// alert
// produce beep sound on some systems
#include <iostream>
using namespace std;

int main()
{
    cout << "\a";

    return 0;
}




// Next topic -------
// backslash - add backslash
#include <iostream>
using namespace std;

int main()
{
    cout << "C:\\Users\\Student";

    return 0;
}




// Next topic -------
// double quotes
#include <iostream>
using namespace std;

int main()
{
    cout << "\"Welcome!\"";

    return 0;
}




// Next topic -------
// single quote
#include <iostream>
using namespace std;

int main()
{
    cout << "It\'s easy job.";

    return 0;
}




// Next topic -------
// changing number base
// change to hex, oct and dec bas numbers
#include <iostream>
using namespace std;

int main()
{
    int a = 26, b = 20;

    cout << a << " " << b << "\n";  // 26 20

    cout << hex;
    cout << a << " " << b << "\n";  // 1a 14

    cout << oct;
    cout << a << " " << b << "\n";  // 32 24

    cout << dec;
    cout << a << " " << b << "\n";  // 26 20

    return 0;
}




// Next topic -------
// boolalpha
#include <iostream>
using namespace std;

int main()
{
    bool x = true;
    bool y = false;

    cout << x << " " << y << endl;
    // print as true false
    cout << boolalpha << endl;
    cout << x << " " << y << endl;
    // print as 1 & 0
    cout << noboolalpha << endl;
    cout << x << " " << y << endl;

    return 0;
}




// Next topic -------
// width, fill & alignment
// control the alignment of printed data
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 12;

    cout << setw(5);          // Set width to 5
    cout << setfill('*');     // Set fill character to '*'
    cout << a << "\n";        // ***12

    cout << setw(5);
    cout << "Hi" << "\n";     // ***Hi

    cout << left;             // Left-align the output
    cout << setw(5);
    cout << a << "\n";        // 12***

    return 0;
}




// Next topic -------
// no trailing zeros
// default - floating-point numbers are printed without zeros
//
#include <iostream>
using namespace std;

int main() {
    double a = 3.140000;
    double b = 5.000000;
    cout << a << endl;
    cout << b << endl;
    return 0;
}




// Next topic -------
// default float-point printing precision is 6 digits
#include <iostream>
using namespace std;

int main() {
    double a = 123.456789;
    double b = 0.000123456;
    cout << a << endl;
    cout << b << endl;
    return 0;
}




// Next topic -------
// conversion to scientific digits
// loating-point value exceeds the default stream precision 6 digits
// the output stream automatically switches to scientific notation 
// to preserve significant digits while minimizing output width
#include <iostream>
using namespace std;

int main() {
    double a = 1.23456789;
    double b = 123456789.0;
    cout << a << endl;
    cout << b << endl;
    return 0;
}




// Next topic -------
// set precision
#include <bits/stdc++.h>
using namespace std;

int main() {
    double x = 123.456789;
    cout << setprecision(4) << x << endl;
    cout << setprecision(7) << x << endl;
    return 0;
}




// Next topic -------
// Showing or Hiding Trailing Zeros with showpoint():
#include <bits/stdc++.h>
using namespace std;

int main() {
    double x = 50.0;
    cout << x << endl;
    cout << showpoint << x << endl;
    cout << noshowpoint << x << endl;
    return 0;
}




// Next topic -------
// Displaying Positive Signs with showpos(): 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int b = -10;
    cout << a << " " << b << endl;
    cout << showpos << a << " " << b << endl;
    cout << noshowpos << a << " " << b << endl;
    return 0;
}




// Next topic -------
// Changing Exponential Notation Case with uppercase():
#include <bits/stdc++.h>
using namespace std;

int main() {
    double x = 12345.678;
    cout << scientific << x << endl;
    cout << uppercase << x << endl;
    cout << nouppercase << x << endl;
    return 0;
}




// Next topic -------
// Fixed Format
#include <bits/stdc++.h>
using namespace std;

int main() {
    double x = 1.23;
    double y = 1122456.453;

    cout << fixed << setprecision(6);
    cout << x << endl;
    cout << y << endl;

    cout << fixed << setprecision(2);
    cout << x << endl;
    cout << y << endl;
    return 0;
}





// Next topic -------
// Scientific Format
#include <bits/stdc++.h>
using namespace std;

int main() {
    double x = 1.23;
    double y = 1122456.453;

    cout << scientific << setprecision(6) << x << endl;
    cout << scientific << setprecision(6) << y << endl;

    cout << scientific << setprecision(2) << x << endl;
    cout << scientific << setprecision(2) << y << endl;
    return 0;
}

