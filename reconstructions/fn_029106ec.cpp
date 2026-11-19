namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_029106ec(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
