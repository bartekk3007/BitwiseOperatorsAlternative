#include <iostream>
#include <bitset>
#include <string>

int main()
{
	std::bitset<8> bitset1(2);
	std::bitset<8> bitset2(3);
	std::bitset<8> bitset3(1);
	std::bitset<8> bitset4(std::string("11111101"));

	if ((bitset1 & bitset2) == bitset1)
	{
		std::cout << "It is binary AND\n";
	}
	if ((bitset1 bitand bitset2) == bitset1)
	{
		std::cout << "It is alternative binary AND\n";
	}
	if ((bitset1 | bitset2) == bitset2)
	{
		std::cout << "It is binary OR\n";
	}
	if ((bitset1 bitor bitset2) == bitset2)
	{
		std::cout << "It is alternative binary OR\n";
	}
	if ((bitset1 ^ bitset2) == bitset3)
	{
		std::cout << "It is binary XOR\n";
	}
	if ((bitset1 xor bitset2) == bitset3)
	{
		std::cout << "It is alternative binary XOR\n";
	}
	if (~bitset1 == bitset4)
	{
		std::cout << "It is compliment\n";
	}
	if (compl bitset1 == bitset4)
	{
		std::cout << "It is alternative compliment\n";
	}

	return 0;
}