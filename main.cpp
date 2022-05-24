#include <iostream>

using namespace std;

double calculate(char &, double &, double &);

void read_input(char &, double &, double &);

void print_out(char &, double &, double &);

int main() {
    char op;
    double x;
    double y;
    read_input(op, x, y);
    print_out(op, x, y);
    return 0;
}

double calculate(char & op, double &x, double &y) {
    switch (op) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            cout << "限制輸入以下: [+, -, *, /]" << endl;
            break;
    }

    return 0.0;
}

void read_input(char & op , double & x , double & y ){
    while (true) {
        try {
            string temp;
            cout << "請輸入 x: ";
            cin >> temp;
            x = stod(temp);
            cout << "請輸入 y: ";
            cin >> temp;
            y = stod(temp);
            cout << "請輸入 運算符號 [+, -, *, /]: ";
            cin >> op;
            if(op != '+' && op != '-' && op != '*' && op != '/'){
                cout << "限制輸入以下: [+, -, *, /]" << endl;
                continue;
            }
            break;
        } catch (...) {
            cout << "輸入有誤，請重新輸入" << endl;
        }
    }
}

void print_out(char & op, double &x, double &y) {
    double result = calculate(op, x, y);
    cout << x << " " << op << " " << y << " = " << result;
}

