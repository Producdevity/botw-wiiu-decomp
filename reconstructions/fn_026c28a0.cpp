namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_026c28a0(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
