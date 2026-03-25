#include "refl_action.hpp"
#include "shared_target.hpp"
#include <print>

void do_something_in_A() {
  std::println("Inside plugin A");
  refl_action<my_foo> action;
}