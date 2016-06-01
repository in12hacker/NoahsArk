//
// Created by Peter Chen on 5/29/16.
//

#include "Color.h"

using namespace CubeWorld;

Color::Color() {

}

Color::Color(float _r, float _g, float _b, float _a)
	:r(_r), g(_g), b(_b), a(_a) {

}

Color::~Color(){}


Color Color::operator*(float v) {
	return Color(this->r*v, this->g*v, this->b*v, this->a*v);
}

bool Color::operator==(Color right) {
	return this->r == right.r && this->g == right.g && this->b == right.b && this->a == right.a;
}

bool Color::operator!=(Color right) {
	return this->r != right.r || this->g != right.g || this->b != right.b || this->a != right.a;
}