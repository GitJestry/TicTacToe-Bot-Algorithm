#pragma once
#include <array>
#include <string>
#include <player.hpp>

namespace TicTacToe {

  struct Move{
    int row;
    int col;
    Move(int r, int c) : row(r), col(c) {}
  };

  class Board {
    public:
      using Field = std::array<std::array<Player, 3>, 3>;
      Board() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                field_[i][j] = Player::None;
            }
        }
      }

      void makeMove(Move move, Player player);
      void print();
      Player checkWin();
      Field getField();

    private:
    /* 1 2 3
       4 5 6
       7 8 9

       1 = X
       0 = O
       -1 = Empty
    */
      Field field_;
  };

}