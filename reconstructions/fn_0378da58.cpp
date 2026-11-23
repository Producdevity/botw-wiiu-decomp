struct HandleTarget {
    char pad0[0x50];
    int index;
};

struct HandleSlot {
    void* target;
    int index;
    bool active;
};

extern "C" bool fn_0378da58(const HandleSlot* slot, const HandleTarget* target) {
    if (slot->index != -1 && target != 0) {
        return slot->index == target->index;
    }
    return false;
}
