typedef unsigned char u8;
typedef int s32;
extern "C" void fn_038feb08(void*);

namespace {
struct Object {
    char padding_0[0x6C];
    u8 flag_6c;
};
}

extern "C" s32 fn_038fef68(void *object) {
    if (((Object *) object)->flag_6c == 0) {
        return 0;
    }
    fn_038feb08(object);
    return 1;
}
