namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_026bd3e4(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
