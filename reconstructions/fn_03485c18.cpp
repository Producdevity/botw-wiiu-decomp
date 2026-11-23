struct FlagWordOwner {
    char pad0[0x50];
    unsigned int flags;
};

extern "C" bool fn_03485c18(const void* object) {
    unsigned int flags = static_cast<const FlagWordOwner*>(object)->flags;
    unsigned int bit = flags & 8;
    return bit != 0;
}
