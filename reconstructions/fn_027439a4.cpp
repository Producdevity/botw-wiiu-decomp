extern "C" int fn_0274379c(void *object);
extern "C" void fn_027437fc(void *object);
extern "C" void fn_027438d0(void *object);

namespace {
struct Object {
    char padding_0[0x28];
    unsigned char *flag_28;
};
}

extern "C" void fn_027439a4(void *object)
{
    if (*((Object *)object)->flag_28 != 0 && fn_0274379c(object) != 0) {
        fn_027437fc(object);
        return;
    }
    fn_027438d0(object);
}
