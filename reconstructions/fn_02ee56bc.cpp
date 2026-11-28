extern "C" void fn_02ee505c(void*);
extern "C" int fn_02ee5548(void*);
extern "C" void fn_02ee5638(void*, float);

extern "C" float data_1021f548;

namespace {
struct Object {
    char padding_0[0x25C];
    char block_25c[1];
};
}

extern "C" void fn_02ee56bc(void *object) {
    if (fn_02ee5548(object) != 0) {
        fn_02ee5638(((Object *)object)->block_25c, data_1021f548);
        fn_02ee505c(object);
    }
}
