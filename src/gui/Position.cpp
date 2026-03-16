
#include "Position.hpp"

namespace gui {

Position::Position(double x, double y)
	: mX(x), mY(y)
{
}

void Position::operator+=(const Position& other)
{
	mX += other.x();
	mY += other.y();
}

double Position::x() const
{
	return mX;
}

double Position::y() const
{
	return mY;
}

Position operator+(const Position& lhs, const Position& rhs)
{
	return {lhs.x() + rhs.x(), lhs.y() + rhs.y()};
}

Position operator-(const Position& lhs, const Position& rhs)
{
	return {lhs.x() - rhs.x(), lhs.y() - rhs.y()};
}
}

