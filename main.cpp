# include <iostream>
# include <string>
# include <array>

using namespace std;
int input_number(){
    while (true){
        string temp;
        try{
            cin >> temp;
            int score = stoi(temp);
            return score;
        }catch (exception &err){
            cout << "輸入格式有誤，請重新輸入" << endl;
        }
    }
}

template<size_t SIZE>
double sum(array<int, SIZE> & int_arr){
    double s = 0.0;
    for(int i = 0; i< int_arr.size(); i++){
        s += int_arr[i];
    }
    return s;
}

int main() {
    string std_name, std_id;
    array<int, 3> scores {0, 0, 0};
    cout << "請輸入姓名： ";
    cin >> std_name;
    cout << "請輸入學號： ";
    cin >> std_id;
    cout << "請輸入國文分數： ";
    scores[0] = input_number();
    cout << "請輸入英文分數： ";
    scores[1] = input_number();
    cout << "請輸入數學分數： ";
    scores[2] = input_number();
    cout << '\n';
    cout << "姓名： " << std_name << endl;
    cout << "學號： " << std_id << endl;
    cout << "你的成績如下：" << endl;
    cout << "-------------------" << endl;
    cout << "國文 " << scores[0] << "分" << endl;
    cout << "英文 " << scores[1] << "分" << endl;
    cout << "數學 " << scores[2] << "分" << endl;
    cout << "-------------------" << endl;
    cout << "總分 " << sum(scores) << "分" << endl;
    cout << "平均 " << sum(scores) / scores.size() << "分" << endl;
    cout << "請按任意鍵繼續..." << endl;
    cin.get();
    exit(0);
}
