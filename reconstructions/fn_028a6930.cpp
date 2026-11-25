extern "C" float fn_02b6bce4(void*, void*);

extern "C" float fn_028a6930(void *self) {
    void ***keyRef = (void ***)((char *)self + 0x24);
    float **scaleRef = (float **)((char *)self + 0xC0);
    float *base = *(float **)((char *)self + 0xBC);
    return fn_02b6bce4(*(void **)self, **keyRef) * **scaleRef + *base;
}
