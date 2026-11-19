namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_0257531c(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
