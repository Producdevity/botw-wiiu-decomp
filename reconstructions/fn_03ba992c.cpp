extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_03bc35f0(void*, void*);

namespace {
struct Object {
    char padding_0[0x44];
    void *argument;
    char mutex[1];
    char padding_49[0x88 - 0x49];
    void *target;
};
}

extern "C" void fn_03ba992c(void *object) {
    if (((Object *)object)->target != 0) {
        void *mutex = ((Object *)object)->mutex;

        fn_030bb668(mutex);
        fn_03bc35f0(((Object *)object)->target, ((Object *)object)->argument);
        fn_030bb69c(mutex);
    }
}
