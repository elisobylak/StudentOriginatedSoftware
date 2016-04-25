class Rectangle
{
	public:
		explicit Rectangle( double s = 0.0 , double l = 0.0) : side{s}, length{l}
		{ }

		double getSide() const
		{ return side; }
		double getLength() const
		{ return length; }
		double getArea() const
		{ return length * side; }
		double getPerimeter() const
		{ return length*2 + side*2; }

		void print( ostream & out = cout ) const
		{ out << "(square " << getSide() << ")"; }
		bool operator< ( const Rectangle & rhs ) const
		{ return getSide() < rehs.getSide(); }

		private:
		double side;
		double length;
};

ostream & operator<< ( ostream & out, const Rectangle & rhs )
{
	rhs.print( out );
	return out;
}

int main()
{
	vector<Rectangle> v = { Rectangle{3.0,3.0}, Rectangle{2.0,2.0}, Rectangle{2.5,2.5} };
	cout << "Largest Rectanlge: " << findMax(v) << endl;
	return 0;
}