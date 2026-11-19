namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_027ea2e4(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
