#include "board.hpp" 
#include <iostream>

int main() {
    TicTacToe::Board board;
    board.makeMove(0, 0, TicTacToe::Player::X);
    board.makeMove(0, 1, TicTacToe::Player::X);
    board.makeMove(0, 2, TicTacToe::Player::X);
    board.print();
    std::cout << "Did X win?" << (board.checkWin() == TicTacToe::Player::X ? "yes" : "no");
}