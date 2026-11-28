typedef int s32;

extern "C" unsigned char fn_034dc5d0(void *);
extern "C" int fn_034dc784(void*, void*);

extern "C" s32 fn_0306c478(void *object, void *context) {
    s32 result = 0;

    if (fn_034dc5d0(object) != 0) {
        result = fn_034dc784(object, context);
    }
    return result;
}
