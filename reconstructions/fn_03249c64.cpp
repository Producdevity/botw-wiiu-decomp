typedef int s32;

extern "C" int fn_0324d56c(void *);
extern "C" int fn_0324d61c(void*, void*);

namespace {
struct Object {
    char padding_0[0x14];
    char member[1];
};
}

extern "C" s32 fn_03249c64(void *object) {
    Object *self = (Object *)object;
    s32 result = 0;

    if (fn_0324d56c(self) != 0) {
        result = fn_0324d61c(self, self->member);
    }
    return result;
}
