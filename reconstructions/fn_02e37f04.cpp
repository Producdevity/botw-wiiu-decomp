extern "C" void fn_034c9dbc(float *, const float *);

extern "C" void fn_02e37f04(float *self, float *src) {
    float z;
    fn_034c9dbc(self, src);
    *(float *)((char *)self + 0x98) = *(float *)((char *)src + 0);
    *(float *)((char *)self + 0x9C) = *(float *)((char *)src + 4);
    z = *(float *)((char *)src + 8);
    *(float *)((char *)self + 0xA0) = z;
}
