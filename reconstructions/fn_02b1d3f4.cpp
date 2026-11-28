struct HandleSlot {
    bool locked;
    unsigned char pad1[15];
    unsigned int handle;
    unsigned char pad20[4];
    short first;
    short second;
};
typedef char HandleSlotSize[sizeof(HandleSlot) == 28 ? 1 : -1];

extern "C" void fn_030b0cb8(unsigned int* destination, const unsigned int* source);

extern "C" void fn_02b1d3f4(HandleSlot* slot, const unsigned int* handle) {
    if (slot->locked)
        return;
    fn_030b0cb8(&slot->handle, handle);
    slot->second = -1;
    slot->first = -1;
}
