extern "C" void fn_020fc1b8(void*);
extern "C" void fn_02b744a0(void *, float);
extern "C" void* fn_037966a8(void *);

extern "C" float data_100201d0;

namespace {
struct Owner {
    void* target;
    char padding_4[0xCC];
    int state;
};
}

extern "C" void fn_020fb39c(void *object) {
    if (((Owner*)object)->state == -1) {
        fn_020fc1b8(object);
        return;
    }
    void *target = fn_037966a8(((Owner*)object)->target);
    if (target != 0) {
        fn_02b744a0(target, data_100201d0);
    }
}
