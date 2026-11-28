extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Object {
    char padding_0[0x14];
    char lock[0x490];
    int value;
};
}

extern "C" int fn_02a07b98(void *self) {
    void *lock = ((Object *) self)->lock;
    int *field = &((Object *) self)->value;
    int value;
    fn_030bb668(lock);
    value = *field;
    fn_030bb69c(lock);
    return value;
}
