struct FlaggedEntry {
    char pad0[0x28];
    unsigned short flags;
};

extern "C" void* fn_0370d85c(void* context, int index, int flags);

extern "C" bool fn_0370e3bc(void* context, int index, int flags) {
    FlaggedEntry* entry = static_cast<FlaggedEntry*>(fn_0370d85c(context, index, flags));
    bool result = true;
    if (entry != 0) {
        result = entry->flags & 1;
    }
    return result;
}
