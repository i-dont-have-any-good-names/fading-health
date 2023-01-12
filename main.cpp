#include <iostream>

using std::cout;

class Player {
public:
    int level;
    int xp;
    void stats() {
    if(xp >= 100) {
        xp -= 100;
        level += 1;
    }
        cout << "Your level is - "<< level << "\n";
    }
};

int main() {
    Player player1;
    player1.level = 10;
    player1.xp = 112;
    player1.stats();
    return 0;
}