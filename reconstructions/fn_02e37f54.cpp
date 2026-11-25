extern "C" void fn_034c9dd8(float *, const float *);

extern "C" void fn_02e37f54(float *self, float *src) {
    float z;
    fn_034c9dd8(self, src);
    *(float *)((char *)self + 0xA4) = *(float *)((char *)src + 0);
    *(float *)((char *)self + 0xA8) = *(float *)((char *)src + 4);
    z = *(float *)((char *)src + 8);
    *(float *)((char *)self + 0xAC) = z;
}
