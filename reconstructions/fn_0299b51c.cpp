namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_0299b51c(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
