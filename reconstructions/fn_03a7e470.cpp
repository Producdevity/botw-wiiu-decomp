struct TypedValue {
    char pad0[0x18];
    int type;
    char pad1c[0x4];
    int value;
};

extern "C" int fn_03a7e470(const TypedValue* entry) {
    if (entry->type != 4) {
        return 1;
    }
    return entry->value;
}
