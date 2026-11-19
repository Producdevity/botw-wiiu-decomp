namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_027b5978(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
