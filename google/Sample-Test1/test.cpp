#include "pch.h"
#include "../../Project30/prime-factor.cpp"

class PrimeFactorFixture : public testing::Test
{
public:
	PrimeFactor prime_factor;
	vector<int> expected;
};

TEST_F(PrimeFactorFixture, of1) {
	expected = {};
	EXPECT_EQ(expected, prime_factor.of(1));
}

TEST_F(PrimeFactorFixture, of2) {
	expected = {2};
	EXPECT_EQ(expected, prime_factor.of(2));
}