#include <iostream>

using namespace std;

double calculate(double first, double second, char operator_char);

void print_out(double first, double second, char operator_text, double result);

int main() {
    string temp;
    double first_input;
    double second_input;
    char operator_char;
    while (true) {
        try {
            cin >> temp;
            first_input = stod(temp);
            cin >> temp;
            second_input = stod(temp);
            cin >> temp;
            operator_char = temp[0];
            if(operator_char != '+' && operator_char != '-' && operator_char != '*' && operator_char != '/'){
                cout << "限制輸入以下: [+, -, *, /]" << endl;
                continue;
            }
            break;
        } catch (...) {
            cout << "輸入有誤，請重新輸入" << endl;
        }
    }
    double result = calculate(first_input, second_input, operator_char);
    print_out(first_input, second_input, operator_char, result);
    return 0;
}


double calculate(double first, double second, char operator_char){
    switch (operator_char) {
        case '+':
            return first + second;
        case '-':
            return first - second;
        case '*':
            return first * second;
        case '/':
            if(second == 0){
                throw invalid_argument("被除數不可為零");
            }
            return first / second;
        default:
            throw invalid_argument("undefined error");
    }
}

void print_out(double first, double second, char operator_text, double result){
    cout << first << operator_text << second << '=' << result;
}