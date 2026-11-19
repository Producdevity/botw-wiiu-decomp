namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_02636998(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
