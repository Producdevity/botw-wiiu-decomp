namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_02876d94(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
