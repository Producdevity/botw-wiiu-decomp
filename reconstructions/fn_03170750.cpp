typedef signed char s8;
extern "C" void fn_03173a4c(void*, void*);
extern "C" void *data_1046ce48;

namespace {
struct Object {
    char padding_0[0x45];
    s8 flag_45;
};
}

extern "C" void fn_03170750(void *object) {
    if (data_1046ce48 != 0) {
        fn_03173a4c(data_1046ce48, object);
        ((Object *) object)->flag_45 = 1;
    }
}
