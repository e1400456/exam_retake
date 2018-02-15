GTEST_DIR=/u/d/e1400456/googletest/googletest

my_test: libgtest.a linked_list1.c  linked_list1.h  test_case.c Gtest_main.c 
	g++ -isystem ${GTEST_DIR}/include -pthread linked_list1.c  test_case.c Gtest_main.c libgtest.a -o my_test --coverage

libgtest.a:
	export GTEST_DIR=~/googletest/googletest
	g++ -isystem ${GTEST_DIR}/include -I$(GTEST_DIR) -pthread -c $(GTEST_DIR)/src/gtest-all.cc
	ar -rv libgtest.a gtest-all.o

clean:
	rm libgtest.a
	rm my_test
