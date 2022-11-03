//
// Created by istra on 10/27/22.
//

#ifndef LAB4_MCIA_PIECE_H
#define LAB4_MCIA_PIECE_H

#include <iostream>

class Piece {
public:
    enum class Color: bool {
        Dark,
        Light
    };

    enum class Height: bool {
        Small,
        Tall
    };

    enum class Shape: bool {
        Square,
        Round
    };

    enum class Body: bool {
        Empty,
        Solid
    };
    explicit Piece(Color c, Height h, Shape s, Body b);
    friend std::ostream& operator<<(std::ostream &out, const Piece &p);
private:
    //we use bit-field, a future that allows us to define how many bytes we use with var : n
    Color m_color: 1;
    Height m_height: 1;
    Shape m_shape: 1;
    Body m_body: 1;
};


#endif //LAB4_MCIA_PIECE_H
