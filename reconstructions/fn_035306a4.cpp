namespace {
struct Target {
    unsigned char padding_0[12];
    unsigned int id;
};

struct Slot {
    Target *target;
    unsigned int id;
};
}

extern "C" void* fn_03530688();
extern "C" int fn_03b8f1e0(void*);

extern "C" int fn_035306a4() {
    int entry;
    Target* target;
    Slot* slot;

    slot = (Slot *)fn_03530688();
    if (slot != 0) {
        target = slot->target;
        if ((target != 0) && (target->id == slot->id)) {
            entry = fn_03b8f1e0(target);
            if (entry != 0) {
                return entry + 52;
            }
        }
    }
    return 0;
}
