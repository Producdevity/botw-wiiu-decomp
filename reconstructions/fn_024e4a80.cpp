namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_024e4a80(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
