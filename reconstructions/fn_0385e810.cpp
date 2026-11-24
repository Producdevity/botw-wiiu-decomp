#ifndef OPAQUE_0385E810_DEFINED
#define OPAQUE_0385E810_DEFINED
struct Opaque_0385e824_Entry {
    unsigned char unknown_00[28];
};

struct Opaque_0385e810 {
    unsigned char unknown_00[20];
    Opaque_0385e824_Entry entries[3];
    Opaque_0385e824_Entry* current;
    unsigned char unknown_6c[24];
    unsigned char count;
};
#endif

extern "C" int fn_0385e810(const Opaque_0385e810* self) {
    int index = self->count - 1;
    if (index < 0)
        return 2;
    return index;
}
