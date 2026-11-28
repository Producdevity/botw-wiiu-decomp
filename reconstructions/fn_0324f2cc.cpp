typedef signed char s8;
extern "C" int fn_0324f234(void*);

namespace {
struct Object {
    char padding_0[0x98];
    s8 flag_98;
};
}

extern "C" void fn_0324f2cc(void *object) {
    ((Object *) object)->flag_98 = 0;
    if (fn_0324f234(object) == 0) {
        ((Object *) object)->flag_98 = 1;
    }
}
