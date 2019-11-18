#include <iostream>
using namespace std;

int main(){
    int money;
    do{
        cout << "請輸入您擁有的金錢(1~9999)：";
        cin >> money;
        if(money == 0){
            cout << "你沒錢是在輸入幾點的\n\n";
        }
        else if(money > 9999 or money < 1){
            cout << "輸入錯誤。請重新輸入。\n\n";
        }
        else{
            cout << "\n您擁有的金錢為：\n";
            if(money / 1000 > 0){ //判別是否輸出此幣別
                cout << money / 1000 << "個一千元";
                if(money % 1000 == 0) //以判別此後是否還有輸出來決定輸出分號或句號
                    cout << "。\n";
                else
                    cout << ";\n";
            }
            if(money % 1000 / 100 > 0){
                cout << money % 1000 / 100 << "個一百元";
                if(money % 100 == 0)
                    cout << "。";
                else
                    cout << ";\n";
            }
            if(money % 100 / 10 > 0){
                cout << money % 100 / 10 << "個十元";
                if(money % 10 == 0)
                    cout << "。";
                else
                    cout << ";\n";
            }
            if(money % 10 > 0){
                cout << money % 10 << "個一元。";
            }
        }
    } while(money > 9999 or money < 1);
}
