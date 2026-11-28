extern "C" void fn_0363d0b8(void*);
extern "C" void fn_03661a58(void*);

namespace {
struct Entry {
    void *first;
    char padding_4[0x14];
    void *seventh;
};
struct Object {
    char padding_0[0x45C];
    unsigned count;
    char padding_460[4];
    char *entries;
};
}

extern "C" void fn_036732a0(void* self)
{
    char *object = (char *)self;
    void* first = 0;
    if (((Object *)object)->count != 0) {
        first = ((Entry *)((Object *)self)->entries)->first;
    }
    void* target = first;
    fn_03661a58(target);
    void* second = 0;
    if (((Object *)self)->count > 6) {
        second = ((Entry *)((Object *)self)->entries)->seventh;
    }
    fn_0363d0b8(second);
}
