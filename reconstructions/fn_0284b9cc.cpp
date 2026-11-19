namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_0284b9cc(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
