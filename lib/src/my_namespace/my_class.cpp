#include "my_namespace\my_class.hpp"

#include <iostream>
#include <boost/current_function.hpp>

namespace my_namespace {
	void my_class::member() const { std::cout << BOOST_CURRENT_FUNCTION << std::endl; }
	void my_class::another_member() { attr_ = 0; }
};