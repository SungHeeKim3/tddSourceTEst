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

TEST_F(PrimeFactorFixture, of3) {
	expected = { 3 };
	EXPECT_EQ(expected, prime_factor.of(3));
}

TEST_F(PrimeFactorFixture, of4) {
	expected = { 2,2 };
	EXPECT_EQ(expected, prime_factor.of(4));
}

TEST_F(PrimeFactorFixture, of5) {
	expected = { 2,3 };
	EXPECT_EQ(expected, prime_factor.of(6));
}

TEST_F(PrimeFactorFixture, of9) {
	expected = { 3,3 };
	EXPECT_EQ(expected, prime_factor.of(9));
}

TEST_F(PrimeFactorFixture, of12) {
	expected = { 2,2,3 };
	EXPECT_EQ(expected, prime_factor.of(12));
}