#pragma once
#include <iostream>
#include <print>
#include <string>
#include <string_view>
#include <unordered_map>

class CoreRegistry {
public:
  static CoreRegistry &instance();

  void register_action(const std::string_view name, void *ctor_ptr) {
    std::print("[Registry] Trying to register: '{}' with factory ptr: {}\n",
               name, ctor_ptr);

    auto [iter, success] = map_.emplace(name, ctor_ptr);

    if (success) {
      std::println("  -> SUCCESS! Added to dictionary");
    } else {
      std::println("  -> IGNORED! Key already exists. Kept old ptr: {}",
                   iter->second);
    }
  }

  void print_status() {
    std::println("[Registry] Final Dictionary Size: {}", map_.size());
  }

private:
  std::unordered_map<std::string, void *> map_;
};