extern "C" bool fn_024d9484(char *self) {
    float radius = **(float **)(self + 44);
    float squared = radius * radius;
    return *(float *)(self + 104) < squared;
}
