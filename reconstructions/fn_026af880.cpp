namespace {
struct PointerArrayCount {
    unsigned char storage[24];
    int count;
};
}

extern "C" int fn_026af880(const void* object) {
    return static_cast<const PointerArrayCount*>(object)->count;
}
