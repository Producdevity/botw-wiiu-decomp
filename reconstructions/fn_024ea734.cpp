namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_024ea734(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
