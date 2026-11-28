typedef int s32;

extern "C" int fn_03078584(void);
extern "C" int fn_0310e844(void*, void*, void*);
extern "C" void* data_1046ca84;
extern "C" void* data_1047b054;

namespace {
struct Service {
    char padding_0[0x20];
    void *name;
    void *const *vtable;
};
}

extern "C" s32 fn_030785c4(void) {
    Service *service = (Service *)data_1047b054;

    ((s32 (*)(void *))service->vtable[7])(&service->name);
    if ((fn_0310e844(data_1046ca84, service->name, (void *)0xDCD7E698) != 0) || (fn_03078584() != 0)) {
        return 0;
    }
    return 1;
}
