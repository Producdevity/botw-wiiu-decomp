namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_0287b9b4(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
