typedef signed char s8;
typedef int s32;

extern "C" int fn_024cdf04(void*);
extern "C" int fn_0294bf4c(int);
extern "C" void fn_030ea2e0(void *);
extern "C" bool fn_0378da88(void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100c9454;
extern "C" s32 data_100c945c;

namespace {
struct Object {
    s32 id;
    char padding_4[0x1C];
    s8 flag;
};

inline Object *fields(void *object) {
    return reinterpret_cast<Object *>(object);
}
}

extern "C" void fn_024ce07c(void *object) {
    fields(object)->flag = 0;
    if (fn_0378da88(reinterpret_cast<void *>(fn_0294bf4c(fields(object)->id))) == 0 || fn_024cdf04(object) != 0) {
        fn_030ea2e0(object);
        fn_037b8284(object, &data_100c9454, 0);
        return;
    }
    fn_037b8284(object, &data_100c945c, 0);
}
