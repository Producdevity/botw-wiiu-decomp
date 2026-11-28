extern "C" void fn_0259766c(void* object);
extern "C" int fn_02b67054(void* owner, int value);

namespace {
struct Object {
    void* owner;
    char padding_4[0x58];
    int count;
};
}

extern "C" void fn_028eaa90(void* object)
{
    Object* self = (Object*)object;
    if (fn_02b67054(self->owner, 1) == 0) {
        self->count += 1;
    }
    fn_0259766c(object);
}
