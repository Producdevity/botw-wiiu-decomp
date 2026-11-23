struct UniformLocation {
    short vertex;
    short pixel;
};

// GX2SetVertexUniformReg and GX2SetPixelUniformReg.
extern "C" void fn_043486d8(unsigned int offset, unsigned int count, const void* values);
extern "C" void fn_04348590(unsigned int offset, unsigned int count, const void* values);

extern "C" void fn_03a788f8(const UniformLocation* location, void* context, unsigned int count, const void* values) {
    if (location->vertex != -1) {
        fn_043486d8(location->vertex, count, values);
    }
    if (location->pixel != -1) {
        fn_04348590(location->pixel, count, values);
    }
}
