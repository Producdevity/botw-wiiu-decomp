namespace {
struct Slot {
    unsigned char padding_0[681];
    signed char active;
};
}

extern "C" int data_1046d3ac;
extern "C" bool fn_031ca674(void* object);
extern "C" int fn_031cb284(void*);

extern "C" void fn_0206803c(void *object) {
    Slot *slot = (Slot *)object;
    int manager = data_1046d3ac;
    if (fn_031ca674((void *)manager) != 0 || fn_031cb284((void *)manager) != 0) {
        slot->active = 1;
        return;
    }
    slot->active = 0;
}
