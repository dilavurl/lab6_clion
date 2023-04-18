#include <iostream>
using namespace std;

int result = 0;

void calculate_sum(int n) {

    if (n == 0) {
        return;
    }


    calculate_sum(n-1);


    int term = pow(-1, n-1) * (n-1);

    result += term;
}

//q4

int result1 = 0;


void calculate_sum() {
    int n;
    cout << "Enter n: ";
    cin >> n;


    if (n == 0) {
        return;
    }


    calculate_sum(n-1);


    int term = pow(-1, n-1) * (n-1);


    result1 += term;
}


int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    calculate_sum(n);

    result += 1;

    cout << "The value of the sum is: " << result << endl;

    //q4

    calculate_sum();

    result += 1;
    
    cout << "The value of the sum is: " << result << endl;







    return 0;
}
