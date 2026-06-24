// First topic -------
// if condition
#include <iostream>
using namespace std;

int main(){
    int n = 20;

    if (n % 2 ==0){
        cout << "Even" << endl;
    } 
    return 0;
}



// Next topic -------
// if elsecondition
#include <iostream>
using namespace std;

int main(){
    int n = 20;

    if (n % 2 ==0){
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
    return 0;
}



// Next topic -------
// else if - positive, negative and zero number
#include <iostream>
using namespace std;

int main(){
    int n = 20;

    if (n > 0)
    {
        cout << "Positive" << endl;
    } else if (n < 0)
    {
        cout << "Negative" << endl;
    } else {
        cout << "Zero" << endl;
    }
    return 0;
}



// Next topic -------
// nested if else condition
#include <iostream>
using namespace std;

int main(){
    int n = 20;

    if (n % 2 ==0){
        cout << "Positive" << endl;
        if (n % 2 ==0){
            cout << "Even" << endl;
        } else {
            cout << "Odd" << endl;
        }
    } else if (n < 0) {
        cout << "Negative" << endl;
        if (n % 2 ==0) {
            cout << "Even" << endl;
        } else {
            cout << "Odd" << endl;
        }
    } else {
        cout << "Zero" << endl;
    }
    return 0;
}



// Next topic -------
// nested if else condition
#include <iostream>
using namespace std;

int main() {
    int day = 3;

    switch (day) {
        case 1:
            cout << "Monday";
            break;

        case 2:
            cout << "Tuesday";
            break;

        case 3:
            cout << "Wednesday";
            break;

        default:
            cout << "Invalid day";
    }

    return 0;
}



// Next topic -------
// switch case with operators
#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 0;
    cout << "Enter a choice (L, R, U, D):\n";
    char move;
    cin >> move;

    switch (move) {
        case 'L': 
            x--;  // Move left
            break;
        case 'R': 
            x++;  // Move right
            break;
        case 'U': 
            y++;  // Move up
            break;
        case 'D': 
            y--;  // Move down
            break;
        default: 
            cout << "Invalid choice";
    }

    cout << "New Position: " << x << " " << y << '\n';
    return 0;
}



// Next topic -------
// even odd game
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; 
    if(n%2==0)
    {
        cout << "Opponent Won";
    }
    else
    {
        cout << "You Won";
    }
    return 0;
    
}




// Next topic -------
// largest of 3 numbers
#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a>=b and a>=c)
    {
        cout << a;
    }
    else if(b>=a and b>=c)
    {
        cout << b;
    }
    else
    {
        cout<<c;
    }
    return 0;
}



// Next topic -------
// leap year
#include<iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    if(year % 4 == 0 and year % 100 != 0)
    {
        cout << "Leap Year";
    }
    else if(year % 400 == 0)
    {
        cout << "Leap Year";
    }
    else
    {
        cout << "Not a Leap Year";
    }
    return 0;
}



// Next topic -------
// simple calculator
#include<iostream>
using namespace std;


int main()
{
    int op, x, y;
    cin >> op >> x >> y;

    if(op==1)
    {
        cout << x + y;
    }
    else if(op==2)
    {
        cout << x - y;
    }
    else if(op==3)
    {
        cout << x * y;
    }
    else
    {
        cout << "Invalid Input";
    }
    return 0;
}
