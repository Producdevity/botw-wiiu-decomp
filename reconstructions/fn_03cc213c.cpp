typedef int s32;

extern "C" void fn_03c92f6c(void* output);
extern "C" void fn_03cc18a8(void*);
extern "C" void fn_03cc2128(void* object);

extern "C" s32 data_103e4380;
extern "C" s32 data_103e6408;

namespace {
struct OutputObject {
    char padding_0[0x28];
    s32 *vtable;
};
}

extern "C" void *fn_03cc213c(void *object) {
    ((OutputObject *)object)->vtable = &data_103e4380;
    fn_03c92f6c(object);
    ((OutputObject *)object)->vtable = &data_103e6408;
    fn_03cc18a8((char *)object + 0x58);
    fn_03cc2128(object);
    return object;
}
