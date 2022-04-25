#include <iostream>

#define MAXIMUM_COUNT 30

using namespace std;

void input_grades(int total_count, double grades[]);

double calc_average(int total_count, const double grades[]);

void output_result(int total_count, double grades[]);

int main() {
    string temp;
    int count = 0;
    cout << "請輸入總筆數：";
    try {
        cin >> temp;
        int score = stoi(temp);
        count = score;
    } catch (exception &err) {
        throw std::invalid_argument("輸入格式有誤，請重新輸入");
    }
    if (count > MAXIMUM_COUNT) {
        throw std::invalid_argument("輸入格式有誤，請重新輸入");
    }
    double target_grades[count];

    input_grades(count, target_grades);

    output_result(count, target_grades);

    return 0;
}

void input_grades(int total_count, double grades[]) {
    if (total_count > MAXIMUM_COUNT) {
        throw std::invalid_argument("輸入格式有誤，請重新輸入");
    }
    string temp;
    for (int i = 0; i < total_count; i++) {
        cout << "請輸入第" << i + 1 << "筆資料：";
        try {
            cin >> temp;
            double score = stoi(temp);
            grades[i] = score;
        } catch (exception &err) {
            throw std::invalid_argument("輸入格式有誤，請重新輸入");
        }
    }
}

double calc_average(int total_count, const double grades[]) {
    if (total_count > MAXIMUM_COUNT) {
        throw std::invalid_argument("輸入格式有誤，請重新輸入");
    }
    double total = 0.0;
    for (int i = 0; i < total_count; i++) {
        total += grades[i];
    }
    return total / total_count;
}


void output_result(int total_count, double grades[]) {
    if (total_count > MAXIMUM_COUNT) {
        throw std::invalid_argument("輸入格式有誤，請重新輸入");
    }

    for (int i = 0; i < total_count; i++) {
        cout << "成績" << i + 1 << " " << grades[i] << "分" << endl;
    }

    cout << endl << "總共" << total_count << "筆成績" << endl;
    cout << "平均" << calc_average(total_count, grades) << "分" << endl;
}