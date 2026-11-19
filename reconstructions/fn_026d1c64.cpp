namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_026d1c64(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
