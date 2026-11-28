struct HandleSlot {
    void* target;
    int index;
    bool active;
};

extern "C" HandleSlot* fn_0378dca0(HandleSlot* storage);
extern "C" void fn_02bd63f4(void*, HandleSlot*);
extern "C" bool fn_0378dacc(void*, void*);
extern "C" void fn_0378dc60(int, int);
extern "C" void fn_0378da14(void* handle);

namespace {
struct Object {
    char padding_0[0x104];
    HandleSlot slot;
};
}

extern "C" bool fn_02bd6408(void* self) {
    HandleSlot current;
    fn_0378dca0(&current);
    fn_02bd63f4(self, &current);
    bool changed = !fn_0378dacc(&((Object *)self)->slot, &current);
    fn_0378dc60((int)&((Object *)self)->slot, (int)&current);
    fn_0378da14(&current);
    return changed;
}
