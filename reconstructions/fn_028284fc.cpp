typedef int s32;

extern "C" int fn_03487148(int, void*);
extern "C" void fn_034877bc(void*, void*, void*);

namespace {
struct Owner {
    char padding_0[0xF4];
    s32 handle;
};
}

extern "C" void fn_028284fc(void **object, void *context) {
    struct { s32 first; s32 second; } args;
    s32 handle;
    s32 value;

    handle = ((Owner *)*object)->handle;
    if (handle != 0) {
        value = fn_03487148(handle, context);
        args.second = value;
        args.first = value;
        fn_034877bc((void *) handle, &args.first, 0);
    }
}
