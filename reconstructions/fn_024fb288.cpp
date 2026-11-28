typedef signed char s8;
typedef int s32;
extern "C" int fn_0267301c(void*);

namespace {
struct Object {
    char padding_0[0x3B8];
    s8 flag_3b8;
};
}

extern "C" s32 fn_024fb288(void *object) {
    if (fn_0267301c(object) == 0) {
        return 0;
    }
    ((Object *) object)->flag_3b8 = 0;
    return 1;
}
