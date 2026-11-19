namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_026e8ee4(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
