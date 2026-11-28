extern "C" void fn_030ea2cc(void *);
extern "C" void fn_0379241c(void*, float);

extern "C" float data_100b8148;
extern "C" float data_100b8158;

namespace {
struct Object {
    char padding_0[0x14];
    float value;
};
}

extern "C" void fn_0244ae04(void *object) {
    fn_0379241c(&((Object *)object)->value, data_100b8158);
    if (!(((Object *)object)->value > data_100b8148)) {
        fn_030ea2cc(object);
    }
}
