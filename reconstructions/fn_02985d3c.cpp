namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_02985d3c(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
