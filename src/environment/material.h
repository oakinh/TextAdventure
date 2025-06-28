#include "environment/material.h"

constexpr const MaterialProperties* findProperties(MaterialSpec m) {
    for (auto& [spec, props] : overrides_arr)
        if (spec == m) return &props;
    return nullptr;
}