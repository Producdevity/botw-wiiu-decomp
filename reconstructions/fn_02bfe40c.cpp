typedef float (*FloatGetter)(void *);

extern "C" const float data_101bdfbc;

extern "C" bool fn_02bfe40c(void *self) {
    void *receiver;
    int slot;
    FloatGetter *table = *(FloatGetter **)((char *)self + 0xC);
    slot = 0x17C / sizeof(FloatGetter);
    receiver = self;
    return table[slot](receiver) == data_101bdfbc;
}
