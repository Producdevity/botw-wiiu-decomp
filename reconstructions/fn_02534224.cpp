typedef void (*Callback)(void *);

extern "C" int fn_02534224(void *self) {
    Callback *table = *(Callback **)((char *)self + 0xC);
    table[0x4C / sizeof(Callback)](self);
    return 1;
}
