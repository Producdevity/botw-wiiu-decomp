extern "C" void fn_0378dc60(int, int);

namespace {
struct Object {
    char padding_0[0x83C];
    unsigned int flags;
    char padding_840[0xDCC - 0x840];
    char entry[1];
};
}

extern "C" int fn_02d37764(void *object, int target) {
    Object *self = (Object *) object;
    if (!((self->flags >> 14) & 1) || target == 0) {
        return 0;
    }
    fn_0378dc60(target, (int) self->entry);
    return 1;
}
