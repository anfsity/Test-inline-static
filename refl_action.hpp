#pragma once
#include "core_registry.hpp"
#include <string>

template <auto Func> constexpr const char *extract_name() {

#if defined(_MSC_VER)
  return __FUNCSIG__;
#elif defined(__GNUC__) || defined(__clang__)
  return __PRETTY_FUNCTION__;
#else 
  return __func__;
#endif

}

template <auto Func> struct refl_action {
  inline static const bool is_registered = []() {
    std::string name = extract_name<Func>();

    void *factory_ptr = reinterpret_cast<void *>(Func);
    CoreRegistry::instance().register_action(name, factory_ptr);

    return true;
  }();

  refl_action() { (void)is_registered; }
};