#pragma once

#ifndef TORTOISE_H
#define TORTOISE_H

class Tortoise {
        public:
                Tortoise();
                Tortoise(int* , int , int );
                ~Tortoise();
                int getPosition() const;
                void setPosition(int);
                void move();
                int* getPattern() const;
                int getPatternLength() const;

        private:
                const int length;
                int position;
                int* pattern;
};
#endif