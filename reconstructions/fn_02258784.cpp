extern "C" void fn_02257ae4(void*);
extern "C" void fn_0379241c(void*, float);

extern "C" float data_100637d0;
extern "C" float data_100637e0;

namespace {
struct Object {
    char padding_0[0x3C];
    float value;
};
}

extern "C" void fn_02258784(void *object) {
    if (((Object *)object)->value > data_100637d0) {
        fn_0379241c(&((Object *)object)->value, data_100637e0);
    }
    fn_02257ae4(object);
}
