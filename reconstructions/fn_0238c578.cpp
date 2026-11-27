typedef unsigned char u8;
typedef int s32;

extern "C" int fn_0238c4f8(void*);
extern "C" int fn_03794838(void*, void*, void*);

extern "C" u8 fn_0238c578(void *object) {
    s32 result = 0;
    if ((fn_03794838(object, 0, 0) != 0) && (fn_0238c4f8(object) != 0)) {
        result = 1;
    }
    return result;
}
