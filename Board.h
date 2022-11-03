//
// Created by istra on 10/27/22.
//

#ifndef LAB4_MCIA_BOARD_H
#define LAB4_MCIA_BOARD_H

#include <array>
#include "Piece.h"
#include <optional>

class Board {
public:
    Board() = default;
    using Position = std::pair<int, int>;
    std::optional<Piece> & operator[](Position &index);
    const std::optional<Piece> &operator[](const Position &index) const;
    friend std::ostream& operator<<(std::ostream& out, const Board& board);

private:
    static const int k_size = 16;
    static const int k_width = 4;
    static const int k_height = 4;
    std::array<std::optional<Piece>, k_size> m_board;
};


#endif //LAB4_MCIA_BOARD_H
