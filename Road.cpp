#include "Road.h"

Road::Road() {
        squares = new char[70];
        length = 70;
        clear();
}

Road::Road(int length) {
        if (length < 0)
                this->length = 70;
        else
                this->length = length;

        squares = new char[this->length];
        clear();
}

Road::~Road() {
        delete [] squares;
        squares = nullptr;
        length = 0;
}

void Road::clear() {
        for (int i = 0; i < length; i++) {
                squares[i] = ' ';
        }
}

void Road::mark(int pos, char ch) {
        squares[pos] = ch;
}

int Road::getLastBlock() const {
        return length - 1;
}

char* Road::toString() const {
        return squares;
}