namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_027ed2fc(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
