typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Object {
    s32 active;
    unsigned char padding_4[0x54];
    unsigned char lock[0x3C];
    s32 state;
};
}

extern "C" void fn_029ef78c(void *object_ptr) {
    void *lock = ((Object *)object_ptr)->lock;
    fn_030bb668(lock);
    if (((Object *)object_ptr)->active != 0) {
        ((Object *)object_ptr)->state = 5;
    }
    fn_030bb69c(lock);
}
