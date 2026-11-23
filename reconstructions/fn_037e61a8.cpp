struct LinkedTarget {
    char pad0[0x20];
    void* value;
};

struct LinkedHolder {
    char pad0[0x8];
    LinkedTarget* target;
};

extern "C" bool fn_037e6128(LinkedHolder* holder);

extern "C" void* fn_037e61a8(LinkedHolder* holder) {
    bool ok = fn_037e6128(holder);
    if (ok) {
        LinkedTarget* target = holder->target;
        return target->value;
    }
    return 0;
}
