extern "C" bool fn_024d9448(char *self) {
    float radius = **(float **)(self + 48);
    float squared = radius * radius;
    return *(float *)(self + 104) < squared;
}
