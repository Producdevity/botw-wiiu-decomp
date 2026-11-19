namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_03271a44(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
