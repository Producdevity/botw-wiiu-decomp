typedef float f32;

namespace {
struct Timer {
    unsigned char padding_0[0x3C];
    float value;
};

struct Slot {
    unsigned char padding_0[0x4C];
    float scale;
};
}

extern "C" void* fn_02880238(void*, void*);
extern "C" f32 data_1014cd48;

extern "C" void fn_0288141c(void *object) {
    if (!(((Timer *)object)->value > data_1014cd48)) {
        Slot *slot = (Slot *)fn_02880238(object, 0);
        slot->scale = -slot->scale;
    }
}
