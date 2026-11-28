typedef unsigned char u8;

extern "C" int fn_03c19088(void*);
extern "C" void fn_03c1942c(void*);
extern "C" unsigned char fn_03c2dabc(void);

namespace {
struct Object {
    char padding_0[4];
    u8 flag;
    char padding_5[0x887];
    char member[1];
};
}

extern "C" void fn_03be6920(void *object) {
    if (((Object *) object)->flag != 0 && fn_03c2dabc() != 0 && fn_03c19088(((Object *) object)->member) != 0) {
        fn_03c1942c(((Object *) object)->member);
    }
}
