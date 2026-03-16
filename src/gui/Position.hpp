
#pragma once

namespace gui {

class Position
{
	public:
		Position(double x, double y);

		void operator+=(const Position& other);

		double x() const;
		double y() const;

	private:
		double mX;
		double mY;
};

Position operator+(const Position& lhs, const Position& rhs);
Position operator-(const Position& lhs, const Position& rhs);
}
