typedef int s32;

extern "C" void fn_02950880(int);
extern "C" void fn_02b38a6c(void*, void*, int);
extern "C" bool fn_0378da88(void *);

namespace {
struct Object {
    s32 handle;
    char padding_4[0x28];
    char source[0x20];
    char destination[1];
};
}

extern "C" void fn_025fc3d4(s32 *object) {
    Object *view = (Object *) object;
    if (fn_0378da88(view->source) != 0) {
        fn_02b38a6c(view->destination, view->source, 1);
    }
    fn_02950880(*object);
}
