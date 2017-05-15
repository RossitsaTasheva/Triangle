/*
 * Tr.h
 *
 *  Created on: May 15, 2017
 *      Author: rossitsa
 */

#ifndef TR_H_
#define TR_H_
#include <iostream>
using namespace std;
class Tr {
		friend istream& operator>>(istream&,Tr&);
		friend ostream& operator<<(ostream&,Tr&);
public:
	Tr();
	Tr(int,int,int,int);
	bool operator==(Tr&);
	bool operator!=(Tr&);
	virtual ~Tr();
	int getH() const;
	void setH(int h);
	int getX() const;
	void setX(int x);
	int getY() const;
	void setY(int y);
	int getZ() const;
	void setZ(int z);

private:
	int x;
	int y;
	int z;
	int h;
};

#endif /* TR_H_ */
