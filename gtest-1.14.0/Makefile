all:libgtest.a libgtest_main.a

CFLAGS := -Wall -Wshadow -Wundef -Wno-error=dangling-else -DGTEST_HAS_PTHREAD=1 -fexceptions -Wextra -Wno-unused-parameter -Wno-missing-field-initializers -MD

libgtest.a:
	g++ ${CFLAGS} -Iinclude -I. -o src/gtest-all.cc.o -c src/gtest-all.cc
	ar qc libgtest.a src/gtest-all.cc.o

libgtest_main.a:
	g++ ${CFLAGS} -Iinclude -I. -o src/gtest_main.cc.o -c src/gtest_main.cc
	ar qc libgtest_main.a src/gtest_main.cc.o

clean:
	rm -rf src/*.o libgtest.a libgtest_main.a