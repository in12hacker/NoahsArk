//
// Created by Peter Chen on 5/29/16.
//

#ifndef CUBEWORLD_COLOR_H
#define CUBEWORLD_COLOR_H


namespace CubeWorld {
    class Color {
    public:
        Color();

        ~Color();

        Color(float r, float g, float b, float a);

        bool Equals(Color color);

        int GetHashCode();

        Color operator*(float v);

        bool operator!=(Color right);

        bool operator==(Color right);

    };

}


#endif //CUBEWORLD_COLOR_H
