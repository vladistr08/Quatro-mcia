//
// Created by istra on 10/27/22.
//

#include "Board.h"

std::optional<Piece> &Board::operator[](Board::Position &index) {
    auto [line, column] = index;
    return m_board[k_width * line + column];
}

const std::optional<Piece> &Board::operator[](const Board::Position &index) const {
    auto [line, column] = index;
    return m_board[k_width * line + column];
}

std::ostream &operator<<(std::ostream &out, const Board &board) {
    Board::Position position;
    auto &[line, column] = position;
    for (line = 0; line < Board::k_height; line++) {
        for (column = 0; column < Board::k_width; column++) {
            if (board[position]) {
                out << *board[position] << " ";
            }
            else {
                out << "___";
            }
            out << "\n";
        }
    }
}
