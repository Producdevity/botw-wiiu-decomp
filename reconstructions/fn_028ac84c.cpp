namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_028ac84c(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
