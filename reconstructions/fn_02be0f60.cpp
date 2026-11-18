extern "C" void fn_02be0f60(const float* matrix, float* output, unsigned column) {
    const float* selected = matrix + column;
    output[0] = selected[0];
    output[1] = selected[4];
    output[2] = selected[8];
}
