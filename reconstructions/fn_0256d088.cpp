namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_0256d088(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
