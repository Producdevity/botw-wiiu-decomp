extern "C" void fn_024384e0(void*);
extern "C" void fn_02950aa0(void*, int, float);
extern "C" void fn_02950ad8(void*, int, float);

namespace {
struct Object {
    void *owner;
    char padding_4[0x5C];
    float *first;
    float *second;
};
}

extern "C" void fn_023bebf8(void *object) {
    fn_024384e0(object);
    fn_02950aa0(((Object *) object)->owner, 1, *((Object *) object)->first);
    fn_02950ad8(((Object *) object)->owner, 1, *((Object *) object)->second);
}
