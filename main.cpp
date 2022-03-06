#include <iostream>
# include <string>

using namespace std;

int input_number(){
    while (true){
        string temp;
        try{
            std::cin >> temp;
            int score = stoi(temp);
            return score;
        }catch (exception &err){
            std::cout << "輸入格式有誤，請重新輸入" << endl;
        }
    }
}

int main() {
    string std_name, std_id;
    int ch_score, en_score, mt_score;
    std::cout << "請輸入姓名： ";
    std::cin >> std_name;
    std::cout << "請輸入學號： ";
    std::cin >> std_id;
    std::cout << "請輸入國文分數： ";
    ch_score = input_number();
    std::cout << "請輸入英文分數： ";
    en_score = input_number();
    std::cout << "請輸入數學分數： ";
    mt_score = input_number();
    std::cout << '\n';
    std::cout << "姓名： " << std_name << std::endl;
    std::cout << "學號： " << std_id << std::endl;
    std::cout << "你的成績如下：" << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "國文 " << ch_score << "分" << std::endl;
    std::cout << "英文 " << en_score << "分" << std::endl;
    std::cout << "數學 " << mt_score << "分" << std::endl;
    std::cout << "-------------------" << std::endl;
    double sum_score = ch_score + en_score + mt_score;
    double ave_score = sum_score / 3;
    std::cout << "總分 " << sum_score << "分" << std::endl;
    std::cout << "平均 " << ave_score << "分" << std::endl;
    std::cout << "請按任意鍵繼續...";
    string exit;
    std::cin >> exit;
    return 0;
}
