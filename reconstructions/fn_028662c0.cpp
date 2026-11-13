struct Counts {
    unsigned char unknown[112];
    int first[4];
    int second[4];
    unsigned char padding[384];
    int index;
};
static inline const int& countAt(const int* values, unsigned index) {
    if (index < 4)
        return values[index];
    return values[0];
}
extern "C" int fn_028662c0(const Counts* object, unsigned kind) {
    int result = 0;
    int index = object->index;
    if (index < 0)
        index = 0;
    else if (index > 3)
        index = 3;
    unsigned clampedIndex = index;
    switch (kind) {
    case 0: result = countAt(object->first, clampedIndex); break;
    case 1: result = countAt(object->second, clampedIndex); break;
    }
    return result;
}
