#include<gtest/gtest.h>

extern "C"{
	#include "../../Src/Stm32_Project_1/Core/Src/Hello.h"
}
TEST(SampleTest, Test1){
	ASSERT_EQ(1,1);

}
TEST(SampleTest2, add1){
	ASSERT_EQ(add(1,2),3);
}

TEST(SampleTest3, add2){
	ASSERT_EQ(add(1,4),5);
}
int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();

}
