namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_0297b98c(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
