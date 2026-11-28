extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Object {
    char padding_0[0xC8];
    unsigned int flags;
    char padding_cc[0xD4 - 0xCC];
    char lock[1];
};
}

extern "C" int fn_0399f6a8(void *self) {
    void *lock = ((Object *) self)->lock;
    unsigned int *flags = &((Object *) self)->flags;
    int result;
    fn_030bb668(lock);
    result = (*flags >> 5) & 1;
    fn_030bb69c(lock);
    return result;
}
