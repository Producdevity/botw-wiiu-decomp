extern "C" const float data_102cb248;
extern "C" unsigned fn_0349eccc(void* p);
extern "C" void fn_0349ec2c(void*, int);

union FloatBits_034a19e8 {
    float f;
    int i;
};

extern "C" void fn_034a19e8(void* self, float value) {
    char* target = (char*)fn_0349eccc(self);
    float scale = data_102cb248;
    float scaled = value * scale;
    FloatBits_034a19e8 bits;
    bits.f = scaled;
    *(short*)(target + 0xb8) = bits.i >> 16;
    fn_0349ec2c(self, 0x100);
}
