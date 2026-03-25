#include "core_registry.hpp"
#include <print>

extern void do_something_in_A();
extern void do_something_in_B();

auto main() -> int {
  std::println("=== Start ===");

  do_something_in_A();
  do_something_in_B();

  std::println("=== End ===");

  CoreRegistry::instance().print_status();

  return 0;
}
