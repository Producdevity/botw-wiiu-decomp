namespace {
struct StateView { unsigned char reserved[6148]; unsigned flags; };
}

extern "C" unsigned char fn_02013bd0(void* context, unsigned index) {
    const unsigned flags = static_cast<const StateView*>(context)->flags;
    unsigned result = 0;
    if ((flags & (16u << index)) == 0) {
        if (((flags >> index) & 1u) != 0)
            result = 1;
    }
    return static_cast<unsigned char>(result);
}
