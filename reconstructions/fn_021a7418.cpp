extern "C" void fn_021aad10(int);
extern "C" void fn_02b616bc(void *, void *);
extern "C" void fn_02b616f0(void*, void*);
extern "C" void* fn_037966a8(void *);

namespace {
struct Object {
    char padding_0[0x28];
    char member[1];
};
}

extern "C" void fn_021a7418(void **holder) {
    void *key = *holder;

    fn_02b616f0(((Object *)holder)->member, key);
    fn_02b616bc(((Object *)holder)->member, fn_037966a8(key));
    fn_021aad10((int)holder);
}
