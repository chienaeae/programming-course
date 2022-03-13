#include <iostream>
#include <string>

using namespace std;

int input_integer() {
    string temp_input;
    while (true) {
        try {
            cin >> temp_input;
            return stoi(temp_input);
        } catch (...) {
            cout << "輸入有誤，請重新輸入" << endl;
        }
    }
}

bool check_identity_number(int identity_number) {
    if (identity_number > 0 && identity_number < 5) {
        return true;
    }
    return false;
}


double identity_discount(int identity_number) {
    switch (identity_number) {
        case 1:
            return 0.7;
        case 2:
            return 0.75;
        case 3:
            return 0.9;
        case 4:
            return 0.95;
        default:
            throw logic_error("Given with undefined identity number");
    }
}

string identity(int identity_number) {
    switch (identity_number) {
        case 1:
            return "員工";
        case 2:
            return "VIP";
        case 3:
            return "會員";
        case 4:
            return "一般";
        default:
            throw logic_error("Given with undefined identity number");
    }
}

int main() {
    string name;
    int identity_number = {-1};
    double cost_to_buy = {0.0};
    cout << "請輸入姓名: ";
    cin >> name;
    cout << "請輸入身份類別代號: " << endl;
    cout << "(1) " << identity(1) << endl;
    cout << "(2) " << identity(2) << endl;
    cout << "(3) " << identity(3) << endl;
    cout << "(4) " << identity(4) << endl;

    bool identity_number_checked = false;
    while (!identity_number_checked) {
        identity_number = input_integer();
        identity_number_checked = check_identity_number(identity_number);
        if (!identity_number_checked) {
            cout << "身份類別代號有誤，請重新輸入" << endl;
        }
    }
    cout << "請輸入消費總額: ";
    cost_to_buy = input_integer();

    cout << "姓名 " << name << endl;
    cout << "身份類別 " << identity(identity_number) << ", 折扣為 " << identity_discount(identity_number) * 100 << "折" << endl;
    cout << "消費金額 " << cost_to_buy << "元" << endl;
    cout << "應付金額 " << cost_to_buy * identity_discount(identity_number) << "元" << endl;

    return 0;
}
