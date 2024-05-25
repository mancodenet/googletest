GTEST_INC_PATH := ..
GTEST_INC      := -I${GTEST_INC_PATH}/include

GTEST_LIB_PATH := ..
GTEST_LIB      := ${GTEST_LIB_PATH}/libgtest_main.a ${GTEST_LIB_PATH}/libgtest.a

test:
	g++ -o test test.cc ${GTEST_INC} ${GTEST_LIB}

clean:
	rm -rf test