namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_0284c69c(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
