// Next topic -------
// declare variable
#include <iostream>
using namespace std;

int main(){
    int num1 = 100;
    cout << num1 << endl;

    return 0;
}



// Next topic -------
// update variable
#include <iostream>
using namespace std;

int main(){
    // before update
    int num1 = 100;
    cout << num1 << endl;
    // after update
    num1 = 500;
    cout << num1 << endl;

    return 0;
}



// Next topic -------
// data types
#include <iostream>
using namespace std;

int main(){
    int age = 28;
    string name = "Manoj";
    char gender = 'M';
    bool isMarried = true;
    float weight = 75.20;

    cout << age << endl;
    cout << name << endl;
    cout << gender << endl;
    cout << isMarried << endl;
    cout << weight << endl;

    return 0;
}



// Next topic -------
// sideof() -- unary compile-time operator
// gives the byte size of datatypes
#include <iostream>
using namespace std;

int main(){
    int age = 28;
    string name = "Manoj";
    char gender = 'M';
    bool isMarried = true;
    float weight = 75.20;

    cout << sizeof(age) << endl;
    cout << sizeof(name) << endl;
    cout << sizeof(gender) << endl;
    cout << sizeof(isMarried) << endl;
    cout << sizeof(weight) << endl;

    return 0;
}



// Next topic -------
// local variable has always function or block scope
// can be used only inside block or function
#include <iostream>
using namespace std;

int main(){
    int num1 = 100;
    cout << num1 << endl;

    return 0;
}



// Next topic -------
// gloabl variable can be called anywhere
#include <iostream>
using namespace std;

// global variable
int num1 = 30;
int main(){

    // calling global variable
    cout << num1 << endl;

    return 0;
}



// Next topic -------
// extern keyword - enable using global variable defore defining it
#include <iostream>
using namespace std;

// extern
extern int num1;

int main(){
    
    cout << num1 << endl;
    return 0;
}
int num1 = 100;



// Next topic -------
// local and global variable with same name
// local overshadows global variable 
// local variable has greater precedence
#include <iostream>
using namespace std;

// global variable
int num1 = 100;

int main(){
    
    // local variable 
    int num1 = 300;
    cout << num1 << endl;
    return 0;
}




// Next topic -------
// scope resolution operator for similarly-named variables
// global variable still can be used
#include <iostream>
using namespace std;

// global variable
int num1 = 100;

int main(){
    
    // local variable 
    int num1 = 300;
    cout <<::num1 << endl;
    return 0;
}



// Next topic -------
// nested local variables
// only local or block variable called
#include <iostream>
using namespace std;

int num1 = 10;

int main(){
    int num1 = 20;
    {
        int num1 = 30;
        cout << num1 << endl;
    }
    return 0;
}



// Next topic -------
// static variable allocated memory only once
// local scope accross complete codebase
#include <iostream>
using namespace std;

int main(){
    static int num1 = 500;
    cout << num1 << endl;

    return 0;
}



// Next topic -------
// const variable cannot be updated
#include <iostream>
using namespace std;

int main(){
    const int num1 = 10;
    num1 = num1 + 10; // error
    cout << num1 << end;

    return 0;
}



// Next topic -------
// Area of circle
#include <iostream>
using namespace std;

const double PI = 3.14;

int main(){
    int r;
    cout << "Enter the radius: ";
    cin >> r;
    cout << PI * r * r << endl;

    return 0;
}



// Next topic -------
// auto simplifies auto variable declaration
#include <iostream>
using namespace std;

int main(){
    auto num1 = 10;
    auto num2 = 10.5;

    cout << num1 << endl; 
    cout << num2 << endl;

    return 0;
}



// Next topic -------
// typeid().name()
#include <iostream>
#include <typeinfo>
using namespace std;

int main(){
    auto num1 = 10;
    auto num2 = 10.5;

    cout << typeid(num1).name() << endl; 
    cout << typeid(num2).name() << endl;

    return 0;
}



// Next topic -------
// swap two numbers
#include <iostream>
using namespace std;

int main(){
    // before swap
    int num1 = 10;
    int num2 = 20;
    cout << num1 << " " << num2 << endl;
    
    // after swap 
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << num1 << " " << num2 << endl;

    return 0;
}



// Next topic
// implicit conversion - automatic conversion
// bool --> char --> short int --> int --> unsigned int --> long --> unsigned --> long long --> float --> double --> long double
#include <iostream>
using namespace std;

int main(){
    int x = 10;
    char y = 'A';
    cout << (x + y) << endl;

    float z = 5.5;
    cout << (x + z) << endl;

    bool b = z;
    cout << b << endl;

    return 0;

}



// Next topic
// explicit casting - static casting
#include <iostream>
using namespace std;

int main(){
    float f = 3.5;
    int b = static_cast<int>(f);
    cout << b << endl;

    return 0;
}