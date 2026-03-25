#include "refl_action.hpp"
#include "shared_target.hpp"
#include <print>

void do_something_in_B() {
  std::println("Inside plugin B");
  refl_action<my_foo> action;
}