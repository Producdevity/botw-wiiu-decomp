namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_026ea88c(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
