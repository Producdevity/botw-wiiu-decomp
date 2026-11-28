extern "C" void fn_02c156c4(void*);
extern "C" void fn_02c15754(void*, void*, void*);
extern "C" void fn_02c15a74(void*, void*, void*);
extern "C" void fn_02c15cbc(void*);
extern "C" void fn_02c1c560(void*);

namespace {
struct VTable {
    char padding_0[0x14];
    int (*method)(void*, void*);
};

struct Target {
    char padding_0[0x1E4];
    VTable *vtable;
};

struct Object {
    void *context;
    char padding_4[4];
    Target *second;
    Target *first;
    Target *third;
    char data_14[8];
    char data_1C[8];
};
}

extern "C" void fn_02c11cd4(void* self)
{
    Target *first = ((Object *)self)->first;
    if (first != 0) {
        fn_02c15cbc(first);
        Target *current = ((Object *)self)->first;
        current->vtable->method(current, ((Object *)self)->context);
    }
    Target *second = ((Object *)self)->second;
    if (second != 0) {
        fn_02c1c560(second);
        Target *current = ((Object *)self)->second;
        current->vtable->method(current, ((Object *)self)->context);
    }
    Target *third = ((Object *)self)->third;
    if (third != 0) {
        fn_02c156c4(((Object *)self)->third);
        fn_02c15a74(((Object *)self)->third, ((Object *)self)->data_1C, ((Object *)self)->context);
        fn_02c15754(((Object *)self)->third, ((Object *)self)->data_14, ((Object *)self)->context);
    }
}
