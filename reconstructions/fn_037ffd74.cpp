extern "C" void fn_034a8438(int);
extern "C" void fn_037fed84(void*, int, void*, void*, void*);
extern "C" void fn_037fef40(void*, int, int, int, int);

namespace {
struct Object {
    char padding_0[0x40];
    unsigned char flag;
    char padding_41[0xB3];
    int value_f4;
};
}

extern "C" void fn_037ffd74(void* object) {
    if (((Object *) object)->flag == 0) {
        fn_037fed84(object, 0, 0, 0, 0);
        fn_034a8438(((Object *) object)->value_f4);
        fn_037fef40(object, 0, 0, 0, 0);
    }
}
