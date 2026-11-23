extern "C" bool fn_024d8ff0(char *self) {
    float radius = **(float **)(self + 40);
    float squared = radius * radius;
    return *(float *)(self + 104) > squared;
}
