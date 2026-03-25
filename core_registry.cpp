#include "core_registry.hpp"

CoreRegistry &CoreRegistry::instance() {
  static CoreRegistry registry;
  return registry;
}