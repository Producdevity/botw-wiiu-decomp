extern "C" void fn_0399c200(void*, void*, void*);
extern "C" int fn_039d3d60(void*, void*, void*);
extern "C" void fn_039d7610(void*, void*);
extern "C" void fn_039d7648(void*, void*);
extern "C" void fn_03a7118c(void*, void*, int);

namespace {
struct Object {
    char padding_0[0x38C];
    void *handler;
    unsigned short flags;
};
struct Entry {
    unsigned char kind;
    char padding_1[0x227];
    unsigned flags;
};
}

extern "C" void fn_039d7680(void* self, void* key, void* entry)
{
    int found = fn_039d3d60(self, key, entry);
    if (found == 0 || ((((Object *)self)->flags >> 3) & 1) || !((((Entry *)entry)->flags >> 0xE) & 1)) {
        fn_039d7610(self, entry);
        fn_039d7648(self, entry);
        return;
    }
    fn_03a7118c(((Object *)self)->handler, key, ((Entry *)entry)->kind);
    fn_0399c200(entry, key, 0);
}
