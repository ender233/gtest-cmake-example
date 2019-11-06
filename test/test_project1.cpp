#include <iostream>
#include "gtest/gtest.h"
#include "project1.h" 

// IndependentMethod is a test case - here, we have 2 tests for this 1 test case
TEST(IndependentMethod, ResetsToZero) {
	int i = 3;
	independentMethod(i);
	EXPECT_EQ(0, i);

	i = 12;
	independentMethod(i);
	EXPECT_EQ(0,i);
}

TEST(IndependentMethod, ResetsToZero2) {
	int i = 0;
	independentMethod(i);
	EXPECT_EQ(0, i);
}

class Project1Test : public ::testing::Test {
protected:
    Project1Test() = default;
	virtual ~Project1Test() = default;

	virtual void SetUp() {
	}

	virtual void TearDown() {
	}
	Project1 p;
};

TEST_F(Project1Test, MethodBarDoesAbc) {
	int i = 0;
	p.foo(i); // we have access to p, declared in the fixture
	EXPECT_EQ(1, i);
}

class StringCmpTest : public ::testing::Test {

};

// google test feature
TEST_F(StringCmpTest, Demo)
{
    char* pszCoderZh = "CoderZh";
    wchar_t* wszCoderZh = L"CoderZh";
    std::string strCoderZh = "CoderZh";
    std::wstring wstrCoderZh = L"CoderZh";

    EXPECT_STREQ("CoderZh", pszCoderZh);
    EXPECT_STREQ(L"CoderZh", wszCoderZh);

    EXPECT_STRNE("CnBlogs", pszCoderZh);
    EXPECT_STRNE(L"CnBlogs", wszCoderZh);

    EXPECT_STRCASEEQ("coderzh", pszCoderZh);

    EXPECT_STREQ("CoderZh", strCoderZh.c_str());
    EXPECT_STREQ(L"CoderZh", wstrCoderZh.c_str());
}

// }  // namespace - could surround Project1Test in a namespace
