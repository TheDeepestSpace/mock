#define BOOST_TEST_MODULE mock_test_module

#include <boost\test\unit_test.hpp>
#include <iostream>

#include <mock.hpp>

BOOST_AUTO_TEST_CASE(intro_test) {
	std::cout << "\nmock test\n";
	std::cout << "by Boris.\n";
	std::cout << "Last compiled: " << __TIMESTAMP__ << "\n\n";

	my_namespace::special_function();
}