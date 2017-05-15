/*
 * Tr.cpp
 *
 *  Created on: May 15, 2017
 *      Author: rossitsa
 */

#include "Tr.h"

Tr::Tr() {
	setX(0);
	setY(0);
	setZ(0);
	setH(0);

}

Tr::Tr(int int1, int int2, int int3, int int4) {
		setX(x);
		setY(y);
		setZ(z);
		setH(h);
}

Tr::~Tr() {
}

int Tr::getH() const {	return h;}
void Tr::setH(int h) {	this->h = h;}

int Tr::getX() const {	return x;}
void Tr::setX(int x) {	this->x = x;}

int Tr::getY() const {	return y;}
void Tr::setY(int y) {	this->y = y;}

int Tr::getZ() const {	return z;}

void Tr::setZ(int z) {	this->z = z;}

bool Tr::operator ==(Tr& r) {
	if(this->h==r.h && this->x == r.x && this->y == r.y && this->z == r.z){
		return true;
	}
	return false;
}

bool Tr::operator !=(Tr& r) {
	if(this->h!=r.h && this->x != r.x && this->y != r.y && this->z != r.z){
		return true;
   }
    return false;
}
istream& operator>>(istream& in,Tr& obj){
	//[x,y,z]
	in.ignore(1);//-
	in>>obj.x;
	in.ignore(1); //-
	in>>obj.y;
	in.ignore(1); //-
	in>>obj.z;
	in.ignore(1); //-
	in>>obj.h;
	in.ignore(1); //-
	return in;
}
ostream& operator<<(ostream& out,Tr& obj){
 	//-x-y-z-h-
 	  out<<"-"<< obj.x<<"-"<<obj.y <<"-"<< obj.z <<"-" << obj.h<<"-"<< endl;

return out;

 }
