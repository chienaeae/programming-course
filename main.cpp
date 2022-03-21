#include <iostream>

using namespace std;

void initialize_scores(double initial_scores[], int length);

double calc_ave_scores(const double scores[], int length);

void print_scores_result(double scores[], double average);

int main() {
    int scores_length = 3;

    double scores [scores_length];

    std::cout << "請接續輸入國英數三科成績： " << std::endl;

    initialize_scores(scores, scores_length);

    double average = calc_ave_scores(scores, scores_length);

    print_scores_result(scores, average);

    return 0;
}


void initialize_scores(double initial_scores[], int length) {
    string temp;
    for (int i = 0; i < length; i++) {
        while (true) {
            try {
                cin >> temp;
                initial_scores[i] = stod(temp);
                break;
            } catch (...) {
                cout << "輸入有誤，請重新輸入" << endl;
            }
        }
    }
}

double calc_ave_scores(const double scores[], int length) {
    if(length <= 0){
        return 0;
    }
    double sum;
    for (int i = 0; i < length; i++) {
        sum += scores[i];
    }
    return sum / length;
}

void print_scores_result(double scores[], double average){
    std::cout << "國文 " << scores[0] <<  " 分" << std::endl;
    std::cout << "英文 " << scores[1] <<  " 分" << std::endl;
    std::cout << "數學 " << scores[2] <<  " 分" << std::endl;
    std::cout << "平均 " << average <<  " 分" << std::endl;
}