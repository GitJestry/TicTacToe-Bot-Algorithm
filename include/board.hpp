#pragma once
#include <array>
#include <string>
#include <player.hpp>

namespace TicTacToe {

  class Board {
    public:
      Board() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                field_[i][j] = Player::None;
            }
        }
      }

      void makeMove(int row, int col, Player player);
      void print();
      Player checkWin();

    private:
    /* 1 2 3
       4 5 6
       7 8 9

       1 = X
       0 = O
       -1 = Empty
    */
      Player field_[3][3];
  };

}