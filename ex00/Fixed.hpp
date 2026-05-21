#ifndef FIXED_HPP
# define FIXED_HPP
class Fixed
{
  private:
	int value;
	static int i;

  public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};
#endif