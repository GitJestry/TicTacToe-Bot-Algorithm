#pragma once
#include "board.hpp"
#include <filesystem>
#include <fstream>
#include <iostream>
namespace TicTacToe {

    enum class WinningPosition {
        Yes,
        No,
        NotKnown
    };
    struct Position {
        Board::Field field;
        Move nextMove;
        WinningPosition isWinning;
        Position(Board::Field f, Move n, WinningPosition isW) : field(f), nextMove(n), isWinning(isW) {}
    };
    class Bot {
         public:
            Move makeMove(Board::Field& field);
            void addPosition(Position newPos);
            void removePosition(Position oldPos);
        private:
           std::string filepath = std::filesystem::current_path().string() + "/database.csv";
    };
};  