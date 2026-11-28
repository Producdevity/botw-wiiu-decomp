typedef signed char s8;

extern "C" void fn_02bf9c8c(void*);
extern "C" void fn_02bf9d18(void*);
extern "C" void fn_02bfa158(void*);

namespace {
struct Object {
    char padding_0[0xC0];
    s8 flag;
};
}

extern "C" void fn_02bfa41c(void *object) {
    fn_02bf9c8c(object);
    fn_02bf9d18(object);
    fn_02bfa158(object);
    ((Object *) object)->flag = 0;
}
