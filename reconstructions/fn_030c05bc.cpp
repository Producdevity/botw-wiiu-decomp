typedef unsigned char u8;
typedef int s32;
typedef float f32;

namespace {
struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};
}

extern "C" u8 fn_030c05bc(void *arg0, void *arg1) {
    s32 equal = 0;
    if ((((Vec4 *)arg0)->x == ((Vec4 *)arg1)->x) && (((Vec4 *)arg0)->y == ((Vec4 *)arg1)->y) && (((Vec4 *)arg0)->z == ((Vec4 *)arg1)->z) && (((Vec4 *)arg0)->w == ((Vec4 *)arg1)->w)) {
        equal = 1;
    }
    return equal;
}
