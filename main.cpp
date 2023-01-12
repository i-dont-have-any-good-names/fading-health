#include <iostream>
#include <string>

using std::cout; using std::string; using std::cin;

class Player {
public:
    int coal = 20;
    int iron = 30;

    string call;
    string username;
    int level;
    int xp;
    int levelUp;
    void Levels() {
        if(xp >= 100) {
            xp -= 100;
            level += 1;
        }
    }

    void LevelsUp() {
        if(call == "coal") {
            xp += coal;
            cout << "+ " << coal << "\n";
        }
        else if(call == "iron") {
            xp += iron;
            cout << "+ " << coal << "\n";
        }
        else {
            cout << "+ 0";
        }
    }

    void Stats() {
        cout << "Username - "<< username << "\n";
        cout << "Level - "<< level << "\n";
        cout << "XP - "<< xp << "\n";
    }
};

int main() {
    Player player1;
    player1.username = "Car";
    player1.level = 10;
    player1.xp = 50;
    player1.Levels();
    cout << "Mine: ";
    cin >> player1.call;
    player1.LevelsUp();
    player1.Stats();
    return 0;
}