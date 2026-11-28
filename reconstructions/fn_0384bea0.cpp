typedef int s32;

extern "C" unsigned fn_03792364(void *);
extern "C" void* fn_037b5e8c(void *, const void *, void *, void *, int, int, int);
extern "C" void* data_1047c250;
extern "C" char* data_1047c2b8;

namespace {
struct Source {
    void *data;
    void* const* vtable;
};
struct Owner {
    char padding_0[4];
    char record[8];
    s32 value;
};
}

extern "C" void fn_0384bea0(void *owner, void *source, s32 arg2, s32 arg3) {
    void* const* vtable;
    void *data;

    ((s32 (*)(void *))(vtable = ((Source *)source)->vtable)[7])(source);
    data = ((Source *)source)->data;
    fn_037b5e8c(data_1047c2b8, data, (void *)(fn_03792364(data_1047c250)), ((Owner *)owner)->record, arg2, 0, 2);
    ((Owner *)owner)->value = arg3;
}
