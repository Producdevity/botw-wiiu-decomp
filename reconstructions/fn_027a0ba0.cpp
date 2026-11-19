namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_027a0ba0(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
