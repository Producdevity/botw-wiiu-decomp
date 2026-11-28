typedef int s32;
typedef float f32;

extern "C" f32 data_102412b8;

namespace {
typedef s32 (*SetFlagFn)(void *, s32);
typedef s32 (*ResetFn)(void *);
typedef s32 (*SetValueFn)(void *, f32);

struct Primary {
    char padding_0[0x10];
    void *const *vtable;
};

struct Secondary {
    char padding_0[0x14];
    void *const *vtable;
};

struct Object {
    char padding_0[0x2280];
    Primary *primary;
    Secondary *reset;
    Secondary *value;
    s32 active;
    char padding_2290[0xC];
    s32 modeA;
    char padding_22A0[0x1C];
    s32 modeB;
};
}

extern "C" void fn_02fb2e00(void *object) {
    Primary *primary = ((Object *)object)->primary;
    void *const *primaryVtable = primary->vtable;
    ((SetFlagFn)primaryVtable[13])(primary, 1);
    if (((Object *)object)->active != 0) {
        Secondary *reset = ((Object *)object)->reset;
        void *const *resetVtable = reset->vtable;
        ((ResetFn)resetVtable[49])(reset);
        Secondary *value = ((Object *)object)->value;
        void *const *valueVtable = value->vtable;
        ((SetValueFn)valueVtable[43])(value, data_102412b8);
        ((Object *)object)->active = 0;
    }
    ((Object *)object)->modeB = -1;
    ((Object *)object)->modeA = -1;
}
