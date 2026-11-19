namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_028f66d4(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
