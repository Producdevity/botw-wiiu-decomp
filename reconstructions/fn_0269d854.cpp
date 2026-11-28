typedef float f32;

extern "C" void fn_025e83d8(void *);
extern "C" void fn_0269a000(void*);
extern "C" void fn_0269b150(void*, float);
extern "C" void fn_037988ac(void*, void*);

extern "C" f32 data_1010be48;

namespace {
struct Object {
    void* owner;
    unsigned char padding_4[0x1A4];
    unsigned char member_1a8;
};
}

extern "C" void fn_0269d854(void **object) {
    fn_025e83d8(object);
    fn_037988ac(*object, &((Object *)object)->member_1a8);
    fn_0269a000(object);
    fn_0269b150(object, data_1010be48);
}
