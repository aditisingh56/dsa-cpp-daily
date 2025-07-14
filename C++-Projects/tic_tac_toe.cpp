#include <bits/stdc++.h>
using namespace std;

class TicTacToe {
    vector<char> board;
    char turn;
    const vector<array<int,3>> wins{
        {{0,1,2}},{{3,4,5}},{{6,7,8}},
        {{0,3,6}},{{1,4,7}},{{2,5,8}},
        {{0,4,8}},{{2,4,6}}
    };

    bool is_winner(char p) {
        for (auto w : wins)
            if (board[w[0]]==p && board[w[1]]==p && board[w[2]]==p) return true;
        return false;
    }
    bool filled() { return all_of(board.begin(), board.end(), [](char c){return c!=' ';}); }

  public:
    TicTacToe(): board(9,' '), turn('X') {}
    void show() {
        cout << "\n";
        for (int i=0;i<9;i++){
            cout << " " << (board[i]==' ' ? char('1'+i) : board[i]) << " ";
            if (i%3!=2) cout << "|";
            else if (i!=8) cout << "\n-----------\n";
        }
        cout << "\n\n";
    }
    void play() {
        while (true) {
            show();
            int move;
            cout << "Player " << turn << ", choose (1‑9): ";
            if(!(cin>>move) || move<1||move>9||board[move-1]!=' '){cin.clear();cin.ignore(1000,'\n'); continue;}
            board[move-1]=turn;
            if (is_winner(turn)) { show(); cout << "🎉 Player " << turn << " wins!\n"; break; }
            if (filled())        { show(); cout << "🤝 Draw!\n"; break; }
            turn = (turn=='X'?'O':'X');
        }
    }
};

int main() {
    TicTacToe().play();
    return 0;
}
