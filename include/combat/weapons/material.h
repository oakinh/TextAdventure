enum class MaterialCategories {
    Wood,
    Stone,
    Metal,
    Bone,
    Ethereal,
}

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
}

struct MaterialProperties {
    float density,
    float hardness,
    float toughness,
    float edgeRetention,
    float costMultiplier,
}