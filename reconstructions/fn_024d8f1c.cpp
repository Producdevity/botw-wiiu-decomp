extern "C" bool fn_024d8f1c(char *self) {
    float radius = **(float **)(self + 52);
    float squared = radius * radius;
    return *(float *)(self + 104) > squared;
}
