//
// Created by truefinch on 15.11.18.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>

class SampleTestFixture : public ::testing::Test {
public:
    SampleTestFixture() {}

    virtual void SetUp() {
    }

    static void SetUpTestCase() {
    }

    virtual void TearDown() {};

    static void TearDownTestCase() {};
};

TEST_F(SampleTestFixture, sampleTest1) {
    ASSERT_EQ(1, 1);
}
