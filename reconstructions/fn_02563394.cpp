namespace {
struct PointerArray {
    unsigned int count;
    void* const* entries;
    bool contains(unsigned int index) const {
        return static_cast<unsigned int>(index) < static_cast<unsigned int>(count);
    }
};

struct ObjectFields {
    unsigned char storage[24];
    PointerArray array;
};
}

extern "C" void* fn_02563394(const void* object, unsigned int index) {
    const ObjectFields* fields = static_cast<const ObjectFields*>(object);
    const PointerArray& array = fields->array;
    void* const* entry = array.entries;
    if (array.contains(index)) {
        entry = array.entries + index;
    }
    return *entry;
}
