extern "C" float fn_03f5f384(float *a, float *b) {
    float dy = a[1] - b[1];
    float dx = a[0] - b[0];
    return dx * dx + dy * dy;
}
