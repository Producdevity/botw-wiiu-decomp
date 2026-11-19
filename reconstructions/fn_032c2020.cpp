namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_032c2020(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
