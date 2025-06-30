#include "environment/material.h"
#include <string_view>
#include <iostream>

constexpr const MaterialProperties* findProperties(MaterialSpec m) {
    for (auto& [spec, props] : overrides_arr)
        if (spec == m) return &props;
    return nullptr;
}

std::string_view getMaterialCategoryString(MaterialCategory m) {
    switch (m) {
        case MaterialCategory::Wood: return "Wood";
        case MaterialCategory::Stone: return "Stone";
        case MaterialCategory::Metal: return "Metal";
        case MaterialCategory::Bone: return "Bone";
        case MaterialCategory::Ethereal: return "Ethereal";
        default: return "???"; 
    }
}

std::ostream& operator<<(std::ostream& out, MaterialCategory m) {
    return out << getMaterialCategoryString(m);
}

