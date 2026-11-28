typedef signed char s8;

extern "C" int fn_02ea99fc(void*);
extern "C" void fn_02f6af64(void*, void*);

extern "C" void *data_104698f8;

namespace {
struct Object {
    unsigned char padding_0[0x1FD6];
    s8 pending;
};
}

extern "C" void fn_02f6b020(void *object) {
    void *mode;

    mode = (void *)1;
    if (fn_02ea99fc(data_104698f8) != 0) {
        mode = (void *)2;
    }
    fn_02f6af64(object, mode);
    ((Object *)object)->pending = 0;
}
