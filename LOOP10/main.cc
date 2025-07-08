#include <iostream>
using namespace std;

int info();
int sumNatural(int num);
int factory(int num);
int reverseNumber(int num);
bool isPalindrome(int num);
int countDigits(int num);
int DigitsSum(int num);
bool isPrime(int num);
void fibonacci(int num);

int main() {
    int choice;
    int n, num;

    do {
        info();

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter N: ";
                cin >> n;
                cout << "Sum of Natural Numbers : " << sumNatural(n) << endl;
                break;

            case 2:
                cout << "Enter N: ";
                cin >> n;
                cout << "Factorial : " << factory(n) << endl;
                break;

            case 3:
                cout << "Enter number to reverse: ";
                cin >> num;
                cout << "Reversed : " << reverseNumber(num) << endl;
                break;

            case 4:
                cout << "Enter number: ";
                cin >> num;

                if (isPalindrome(num))
                {
                    cout << "It is a Palindrome" << endl;
                }
                else {
                    cout << "Not a Palindrome" << endl;
                }

                break;

            case 5:
                cout << "Enter number: ";
                cin >> num;
                cout << "Digits Count : " << countDigits(num) << endl;
                break;

            case 6:
                cout << "Enter number: ";
                cin >> num;
                cout << "Sum of Digits : " << DigitsSum(num) << endl;
                break;

            case 7:
                cout << "Enter number: ";
                cin >> num;

                if (isPrime(num)) {
                    cout << num << " is a Prime number" << endl;
                }
                else {
                    cout << num << " is NOT a Prime number" << endl;
                }

                break;

            case 8:
                cout << "Enter Fibonacci size : ";
                cin >> n;

                fibonacci(n);
                break;

            case 0:
                cout << "Exited Successfully" << endl;
                break;

            default:
                cout << "Invalid Choice" << endl;
                break;
        }

    } while (choice != 0);

}

int info(){
    cout << endl << "1. Sum of N Natural Numbers" << endl;
    cout << "2. Factorial of N Numbers" << endl;
    cout << "3. Reverse a Number" << endl;
    cout << "4. Check Palindrome" << endl;
    cout << "5. Count Digits" << endl;
    cout << "6. Sum of Digits" << endl;
    cout << "7. Check Prime" << endl;
    cout << "8. Fibonacci Series" << endl;
    cout << "0. Exit" << endl;
}

int sumNatural(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    return sum;
}

int factory(int n) {
    int prod = 1;
    for (int i = 1; i <= n; i++) {
        prod = prod * i;
    }
    return prod;
}

int reverseNumber(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}

bool isPalindrome(int num) {
    return num == reverseNumber(num);
}

int countDigits(int num) {
    if (num == 0) return 1;
    int count = 0;
    while (num != 0) {
        count = count + 1;
        num = num / 10;
    }
    return count;
}

int DigitsSum(int num) {
    int sum = 0;
    while (num != 0) {
        sum = sum + (num % 10);
        num = num / 10;
    }
    return sum;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void fibonacci(int n) {
    int a = 0, b = 1, c;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}