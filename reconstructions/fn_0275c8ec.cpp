namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_0275c8ec(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
