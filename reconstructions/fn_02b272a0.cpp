extern "C" void fn_02b27174(void *arg0);
extern "C" void fn_031e083c(void*, int, int);

namespace {
struct Object {
    char padding_0[364];
    int value_16c;
    int value_170;
};
}

extern "C" void fn_02b272a0(void* object, int first, int second) {
    if (((Object *) object)->value_16c != 0) {
        fn_02b27174(object);
    }
    fn_031e083c(object, first, second);
    ((Object *) object)->value_170 = first;
}
