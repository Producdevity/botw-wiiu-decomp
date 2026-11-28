typedef float f32;

extern "C" void fn_0344ae90(void*, void*);
extern "C" void* fn_037966a8(void *);
extern "C" const unsigned char data_10549dd0[];

extern "C" f32 data_101e5360;

namespace {
struct Owner {
    char padding_0[0x1AE4];
    f32 scaleX;
    f32 scaleY;
};
}

extern "C" void fn_02d69d08(void *owner) {
    Owner *self = (Owner *)owner;

    self->scaleX = data_101e5360;
    self->scaleY = data_101e5360;
    void *target = fn_037966a8(owner);
    if (target != 0) {
        fn_0344ae90(target, (void *)data_10549dd0);
    }
}
