#include "pch.h"
#include "../../Project30/prime-factor.cpp"

TEST(TestCaseName, TestName) {
	FrimeFactor pr;
	vector<int> expected{};
	EXPECT_EQ(expected, pr.of(1));
}