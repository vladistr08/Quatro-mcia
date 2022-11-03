//
// Created by istra on 10/27/22.
//

#include "Piece.h"

Piece::Piece(Piece::Color c, Piece::Height h, Piece::Shape s, Piece::Body b)
    :m_color(c), m_height(h), m_shape(s) ,m_body(b)
{
    //folosim static assert ca o expresie booleana verificata in initializare, c++ modern
    static_assert(sizeof(*this) == 1, "Piece is over 1 byte...");
}

std::ostream &operator<<(std::ostream &out, const Piece &p) {
    out << static_cast<unsigned>(p.m_color) << static_cast<unsigned>(p.m_height) << static_cast<unsigned>(p.m_shape) << static_cast<unsigned >(p.m_body);
    return out;
}
