namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_0268ddc0(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
