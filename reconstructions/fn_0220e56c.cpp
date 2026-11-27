extern "C" void fn_02210af8(int);
extern "C" void fn_02b616bc(void *, void *);
extern "C" void fn_02b616f0(void*, void*);
extern "C" void* fn_037966a8(void *);

namespace {
struct Object {
    char padding_0[0x4C];
    char member[1];
};
}

extern "C" void fn_0220e56c(void **holder) {
    void *key = *holder;

    fn_02b616f0(((Object *)holder)->member, key);
    fn_02b616bc(((Object *)holder)->member, fn_037966a8(key));
    fn_02210af8((int)holder);
}
