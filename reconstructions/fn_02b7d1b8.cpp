extern "C" int fn_0378db34(void*);
extern "C" void fn_02b38a6c(void*, void*, int);
extern "C" void fn_0378dc60(int, int);

namespace {
struct Object {
    char padding_0[4];
    char handle_slot[0x20];
    char member_24[0x14];
    int state;
};
}

extern "C" void fn_02b7d1b8(void* self, void* handle) {
    if (fn_0378db34(handle) == 0) {
        ((Object *) self)->state = 3;
        return;
    }
    fn_02b38a6c(((Object *) self)->handle_slot, handle, 1);
    fn_0378dc60((int) ((Object *) self)->member_24, (int) handle);
    ((Object *) self)->state = 1;
}
