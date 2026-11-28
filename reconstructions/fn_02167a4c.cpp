extern "C" int fn_037a4ed8(void*);

namespace {
struct Target {
    unsigned char padding_0[0x60];
    unsigned short flags_60;
    unsigned char padding_62[0x46];
    unsigned int flags_a8;
};
}

extern "C" void fn_02167a4c(void** owner_slot)
{
    Target* target = (Target*) fn_037a4ed8(*owner_slot);
    if (target != 0) {
        unsigned int high_flags = target->flags_a8;
        unsigned int low_flags = target->flags_60;
        low_flags &= 0xFFFFFFCF;
        high_flags &= 0xFFFFFFBF;
        target->flags_60 = low_flags;
        target->flags_a8 = high_flags;
    }
}
