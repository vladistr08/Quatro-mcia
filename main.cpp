#include <iostream>
#include "Piece.h"
// vrem sa instantiem o clasa Board, sa o afisam pe ecran, sa punem o piesa pe ea si sa o afisam iar


int main() {
    Piece p(Piece::Color::Dark, Piece::Height::Tall, Piece::Shape::Round, Piece::Body::Empty);
    std::cout << p;
    return 0;
}
