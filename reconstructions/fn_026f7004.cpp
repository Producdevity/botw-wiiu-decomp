namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_026f7004(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
