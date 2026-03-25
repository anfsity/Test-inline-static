#pragma once
#include "core_registry.hpp"
#include <string>

template <auto Func> constexpr const char *extarct_name() {
  return __PRETTY_FUNCTION__;
}

template <auto Func> struct refl_action {
  inline static const bool is_registerd = []() {
    std::string name = extarct_name<Func>();

    void *factroy_ptr = reinterpret_cast<void *>(Func);
    CoreRegistry::instance().register_action(name, factroy_ptr);

    return true;
  }();

  refl_action() { (void)is_registerd; }
};