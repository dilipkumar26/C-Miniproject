#include "gtest/gtest.h"
#include "account.h"
#include "checkings.h"
#include "savings.h"

TEST(account, Test_Account_Valid_inputs )
{
    account a(2568746924);
    EXPECT_TRUE(a.valid_input()); 
    account a1(568745623);
    EXPECT_FALSE(a1.valid_input());
}

TEST(deposit,Test_deposit_Valid_inputs) {
    deposit d(500);
    EXPECT_TRUE(d.valid_input()); 
    deposit d1(10);
    EXPECT_FALSE(c1.valid_input()); 
    deposit d2(2000.0);
    EXPECT_TRUE(d2.valid_input());
}

TEST(withdraw,Test_withdraw_Valid_inputs) {
    withdraw wd(100);
    EXPECT_TRUE(h.valid_input()); 
    withdraw wd1(50);
    EXPECT_FALSE(h1.valid_input()); 
    withdraw wd2(2500);
    EXPECT_TRUE(h2.valid_input());
}

TEST(checkbalance,Test_checkbalance_Valid_inputs) {
    checkbalance cb();
    EXPECT_TRUE(a.valid_input()); 
    checkbalance cb1();
    EXPECT_FALSE(a1.valid_input()); 
}

TEST(transfermoney,Test_transfermoney_Valid_inputs) {
    transfermoney tm(15000);
    EXPECT_TRUE(tm.valid_input()); 
    checkbalance tm1(1000000);
    EXPECT_FALSE(tm1.valid_input());
    transfermoney tm2(40000);
    EXCEPT_TRUE(tm2.valid_input()); 
}

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}