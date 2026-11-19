namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_02761b80(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
