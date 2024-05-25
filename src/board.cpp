#include "board.hpp"
#include <iostream>

void TicTacToe::Board::print() {
    for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                char symbol = ' ';
                if (field_[i][j] == Player::X) {
                    symbol = 'X';
                } else if (field_[i][j] == Player::O) {
                    symbol = 'O';
                }
                std::cout << "|" << symbol << "|";
            }
            std::cout << std::endl;
        }
}

void TicTacToe::Board::makeMove(Move move, Player player) {
    if (move.row >= 0 && move.row < 3 && move.col >= 0 && move.col < 3 && field_[move.row][move.col] == Player::None) 
        field_[move.row][move.col] = player;
}

TicTacToe::Player TicTacToe::Board::checkWin() {
    // Check rows
    for (int i = 0; i < 3; ++i) {
        if (field_[i][0] != Player::None && field_[i][0] == field_[i][1] && field_[i][1] == field_[i][2]) {
            return field_[i][0];
        }
    }
    // Check columns
    for (int j = 0; j < 3; ++j) {
        if (field_[0][j] != Player::None && field_[0][j] == field_[1][j] && field_[1][j] == field_[2][j]) {
            return field_[0][j];
        }
    }
    // Check diagonals
    if (field_[0][0] != Player::None && field_[0][0] == field_[1][1] && field_[1][1] == field_[2][2]) {
        return field_[0][0];
    }
    if (field_[0][2] != Player::None && field_[0][2] == field_[1][1] && field_[1][1] == field_[2][0]) {
        return field_[0][2];
    }

    return Player::None;
}

TicTacToe::Board::Field TicTacToe::Board::getField() {
    return field_;
}