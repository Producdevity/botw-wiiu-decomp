namespace {
struct PointerVector {
    const void* const* entries;
    int size;
};
}

extern "C" int fn_03f3ea2c(const void* vector, const void* const* key, int begin, int end) {
    const PointerVector* view = static_cast<const PointerVector*>(vector);
    if (end < 0) {
        end = view->size;
    }
    for (int i = begin; i < end; ++i) {
        if (view->entries[i] == *key) {
            return i;
        }
    }
    return -1;
}
