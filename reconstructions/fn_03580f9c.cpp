typedef int s32;

extern "C" int fn_03581e54(void*);
extern "C" char* data_1047c390;

namespace {
struct Manager {
    char padding_0[0x54];
    void *source;
};
struct Object {
    char padding_0[0x274];
    s32 value;
};
}

extern "C" void fn_03580f9c(void *object) {
    void *source;

    source = ((Manager *)data_1047c390)->source;
    if (source != 0) {
        ((Object *)object)->value = fn_03581e54(source);
    }
}
