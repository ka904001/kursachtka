#include <iostream>
#include <string>
using namespace std;

int main() {
        char S = '0'; //состояние автомата
        char inp = '0'; //вход автомата

        //Возможные выходы автомата
        string Y0 = "Бери ремень\n";
        string Y1 = "Ругай\n";
        string Y2 = "Успакаивай\n";
        string Y3 = "Надейся\n";
        string Y4 = "Радуйся!\n";
        string Y5 = "Ликуй!\n";

        cout<<"Умный отец начал воспитание:)\n";

        cin>>inp;
        while(inp != 'e') {
                //Распознавание входа автомата
                switch (inp) {
                case '2':
                        //распознание текущего состояние автомата
                        switch (S) {
                        case '0':
                                S = '1';
                                cout<<Y2;
                                break;
                        case '1':
                                S = '2';
                                cout<<Y1;
                                break;
                        case '2':
                                S = '2';
                                cout<<Y0;
                                break;
                        case '3':
                                S = '1';
                                cout<<Y2;
                                break;
                        }
                        break;
                case '5':
                        switch (S) {
                        case '0':
                                S = '3';
                                cout<<Y4;
                                break;
                        case '1':
                                S = '0';
                                cout<<Y3;
                                break;
                        case '2':
                                S = '0';
                                cout<<Y2;
                                break;
                        case '3':
                                S = '3';
                                cout<<Y5;
                                break;
                        }
                        break;
                default:
                        cout<<"Некорректный ввод, для выхода введите \"е\"\n";
                }
                cin>>inp;
        }

        return 0;
}
