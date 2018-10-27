#include "my_namespace\functions.hpp"

#include <iostream>
#include <boost/current_function.hpp>

namespace my_namespace {
	double special_function() { std::cout << BOOST_CURRENT_FUNCTION << std::endl; return 3.14; }
	double another_one() { std::cout << BOOST_CURRENT_FUNCTION << std::endl; return 0; }
}