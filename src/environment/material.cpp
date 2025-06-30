#include "environment/material.h"
#include <string_view>
#include <iostream>

constexpr const MaterialProperties* findProperties(MaterialSpec m) {
    for (auto& [spec, props] : overrides_arr)
        if (spec == m) return &props;
    return nullptr;
}

std::string_view getMaterialCategoryString(MaterialCategory m) {
    using enum MaterialCategory;
    switch (m) {
        case Wood: return "Wood";
        case Stone: return "Stone";
        case Metal: return "Metal";
        case Bone: return "Bone";
        case Ethereal: return "Ethereal";
        default: return "???"; 
    }
}

std::ostream& operator<<(std::ostream& out, MaterialCategory m) {
    return out << getMaterialCategoryString(m);
}

