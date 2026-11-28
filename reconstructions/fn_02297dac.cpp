typedef int s32;

extern "C" int fn_02296aa0(void*);
extern "C" void fn_02297ccc(void*);
extern "C" void fn_0229a2dc(void*);

namespace {
struct Object {
    char padding_0[0x28];
    s32 *flag;
};
}

extern "C" void fn_02297dac(void *object) {
    fn_0229a2dc(object);
    if (*((Object *) object)->flag == 0 && fn_02296aa0(object) != 0) {
        fn_02297ccc(object);
    }
}
