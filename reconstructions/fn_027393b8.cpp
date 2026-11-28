typedef int s32;

extern "C" void fn_0273933c(void*, void*);
extern "C" s32 fn_0273935c(void * *);
extern "C" void fn_027393a8(void*, void*);

namespace {
struct Object {
    char padding_0[0x20];
    s32 *state;
};
}

extern "C" void fn_027393b8(void **object, void *argument) {
    if ((*((Object *) object)->state & 0x20) || fn_0273935c(object) == 0) {
        fn_0273933c(object, argument);
        return;
    }
    fn_027393a8(object, argument);
}
