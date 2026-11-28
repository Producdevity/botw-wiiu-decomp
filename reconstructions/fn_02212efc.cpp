typedef signed char s8;
typedef unsigned char u8;

extern "C" void fn_02212ea4(void*, void*);
extern "C" void fn_0221d9f4(char *);

namespace {
struct Object {
    char padding_0[0x1C];
    u8 *flag;
};
}

extern "C" void fn_02212efc(s8 *object) {
    fn_0221d9f4((char *) object);
    if (*((Object *) object)->flag == 0) {
        fn_02212ea4(object, 0);
    }
}
