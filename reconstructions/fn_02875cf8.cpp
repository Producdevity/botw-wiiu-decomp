namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_02875cf8(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
