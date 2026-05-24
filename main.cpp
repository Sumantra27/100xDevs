#include <iostream>
#include <string>
using namespace std;

float sum(float a, float b)
{
    float c;
    c = a + b;
    return c;
};

class Employee {
public:
    string name;
    int salary;

    Employee(string name, int salary, int secretPassword)
    {
        this->name = name;
        this->salary = salary;
        this->secretPassword = secretPassword;
    }

    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << "." << endl;
    }

    void getSecretPassword()
    {
        cout << "The Secret Password of employee is " << this->secretPassword;
    }

private:
    int secretPassword;
};

class Programmer : public Employee{
    public:
    int errors;
};


int main()
{
    // cout << "Helolo world" <<endl ;
    //     // return 0;

    //     float a, b;

    //     cout << "Enter first number" <<endl ;
    //     cin >> a;

    //     cout << "Enter second number" <<endl ;
    //     cin >> b;

    // cout << "a+b= "<< a + b <<endl;
    // cout << "a-b= "<< a - b <<endl;
    // cout << "a*b= "<< a * b <<endl;
    // cout << "a/b= "<< a / b <<endl;

    // if (a % 2 == 0) {
    //     cout << "Helolo world" <<endl ;
    // }

    // int age;
    // cout << "Enter your age" << endl;
    // cin >> age;

    // switch (age)
    // {
    // case 12:
    //     cout << "You are 12 years old";
    //     break;

    // case 18:
    //     cout << "You are 18 years old";
    //     break;

    // default:
    //     cout << "You are happy";
    //     break;
    // }

    // int index = 0;
    // // while(index < 34)
    // // {
    // //     cout << "We are at index number " << index <<endl;
    // //     index = index + 1;
    // // }

    // do {
    // cout << "We are at index number " << index <<endl;
    // index = index + 1;
    // }while (index < 23);

    /////

    // for (int i = 0; i < 34; i++)
    // {
    //     cout << "The value of i is " << i << endl;
    // }

    // float a, b;
    // cout << "Enter first number" <<endl ;
    // cin >> a;
    // cout << "Enter second number" <<endl ;
    // cin >> b;
    // cout << "The function return " << sum(a,b);

    //////

    // int marks[5];

    // for (int i = 0; i < 5; i++) {
    //     cout << "Enter the marks of " << i+1 << "th student is" << endl;
    //     cin >> marks[i+1];
    // }

    // for (int i = 0; i < 5; i++) {
    //     cout << "Enter the marks of " << i+1 << "th student is " << marks[i+1] << endl;
    // }

    // int arr2d[2][3] = {{1, 2, 3},{4, 5, 6}};
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "The value at " << i+1 << ","<< j+1 << " is " << arr2d[i][j] << endl;
    //     }
    // }

    // string name = "Sumantra";
    // cout << "The name is " << name << endl;
    // cout << "The length of name is " << name.length() << endl;
    // cout << "The name is " << name.substr(0,3) << endl;
    // cout << "The name is " << name.substr(2,3) << endl;

    // int a = 34;
    // int* ptra;
    // ptra = &a;
    // cout << "The address of a is " << ptra << endl;
    // cout << "The value of a is " << *ptra << endl;
    // cout << "The address of a is " << &a << endl;
    // cout << "The value of a is " << a << endl;

    Employee har("Sumantra constructor", 250, 234233);
    // har.name = "Sumantra";
    // har.salary = 250;
    // cout << "The name of our first employee is " << har.name << " and his salary is " << har.salary << "." <<endl;
    har.printDetails();
    har.getSecretPassword();

    return 0;
}