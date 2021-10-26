#pragma once
#include "Vertex.h"
#include "Utilities.h"
#include <cmath> //needed? 
#include "Board.h"

class Triangle {
public: 
	Triangle(const Vertex vertices[3]);
	Triangle(const Vertex& v0, const Vertex& v1, double height); 
	Vertex getVertex(int index) const; 
	double getLength() const;
	double getHeight() const;
	void draw(Board& board) const;
	//getBoundingRectangle?
	double getArea();
	double getPerimeter();
	Vertex getCenter();
	bool scale(double factor);

private:
	Vertex m_v0;
	Vertex m_v1;
	Vertex m_v2;
	double m_len;
	double m_height;
	double calcHeight();
	void setDefault();
};

