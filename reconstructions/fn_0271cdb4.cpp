namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_0271cdb4(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
