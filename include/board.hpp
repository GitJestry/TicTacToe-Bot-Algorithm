#include <array>
#include <string>

namespace TicTacToe {

  class Board {
    public:
      Board(std::string b = "X", std::string s = "O") : begin_symbol_(b), second_symbol_(s) {}

      void makeMove(int position);
      void draw();

    private:
    /* 1 2 3
       4 5 6
       7 8 9

       1 = X
       0 = O
       -1 = Empty
    */
      std::array<int, 9> field_ {-1};
      std::string begin_symbol_, second_symbol_;
      int player_turn = 1;
  };

}