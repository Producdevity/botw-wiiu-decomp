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

extern "C" u8 fn_030c05bc(void *left, void *right) {
    s32 equal = 0;
    if (((Vec4 *)left)->x == ((Vec4 *)right)->x && ((Vec4 *)left)->y == ((Vec4 *)right)->y && ((Vec4 *)left)->z == ((Vec4 *)right)->z && ((Vec4 *)left)->w == ((Vec4 *)right)->w) {
        equal = 1;
    }
    return equal;
}
