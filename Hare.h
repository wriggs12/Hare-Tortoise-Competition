#pragma once

#ifndef HARE_H
#define HARE_H

class Hare {
        public:
                Hare();
                Hare(int* , int , int );
                ~Hare();

                int getPosition() const;
                void setPosition(int newPosition);
                int* getPattern() const;
                int getPatternLength() const;
                void move();

        private:
                const int length;
                int* pattern;
                int position;
};
#endif