extern "C" void fn_02daa1f0(void*);
extern "C" void fn_02daae9c(void*);

extern "C" unsigned char data_10463ff0;

namespace {
struct Object {
    char padding_0[0x18];
    char block_18[1];
};
}

extern "C" void fn_02dab760(void *object) {
    fn_02daa1f0(((Object *)object)->block_18);
    if (data_10463ff0 != 0) {
        fn_02daae9c(object);
    }
}
