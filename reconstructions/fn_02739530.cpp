namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_02739530(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
