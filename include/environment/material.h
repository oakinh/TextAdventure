#include <array>

enum class MaterialCategories {
    Wood,
    Stone,
    Metal,
    Bone,
    Ethereal,
};

enum class MaterialSpec {
    // Woods
    Oak,
    Birch,
    Pine,

    // Stones
    Obsidian,
    Granite,
    Marble,

    // Metals
    Bronze,
    Iron,
    WroughtIron,
    Steel, 
    DamascusSteel,
    Titanium
};

struct MaterialProperties {
    float density;
    float hardness;
    float toughness;
    float edgeRetention;
    float costMultiplier;
};

// constexpr std::unordered_map<MaterialSpec, MaterialProperties> overrides {

// };

constexpr std::array overrides_arr = std::to_array<std::pair<MaterialSpec, MaterialProperties>>({
    {MaterialSpec::Oak,   {0.75f, 3.5f, 2.0f, 1.2f, 1.0f}},
    {MaterialSpec::Iron,  {7.86f, 4.0f, 3.4f, 2.0f, 1.3f}},
    // …
});

constexpr const MaterialProperties* findProperties(MaterialSpec m);