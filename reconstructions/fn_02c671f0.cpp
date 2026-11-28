extern "C" void* fn_0330c2b0(int);
extern "C" void fn_0378a24c(void*, void*);
extern "C" int fn_0378dce8(int, void*, void*);

namespace {
struct VirtualObject {
    char padding_0[0xE8];
    void* const* vtable;
};
struct Provider {
    char padding_0[0xFC];
    void* const* vtable;
};
}

extern "C" void fn_02c671f0(int* handle) {
    void* instance = fn_0330c2b0(*handle);
    if (instance != 0) {
        Provider* provider = ((Provider*(*)(void*))((VirtualObject*)instance)->vtable[263])(instance);
        if (provider != 0) {
            int target = ((int (*)(void*))provider->vtable[81])(provider);
            if (target != 0) {
                fn_0378dce8(target + 1352, 0, 0);
                fn_0378a24c((void*)target, 0);
            }
        }
    }
}
