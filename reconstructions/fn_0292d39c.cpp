namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_0292d39c(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
