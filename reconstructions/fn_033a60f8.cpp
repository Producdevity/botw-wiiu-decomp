namespace {
struct Block {
    float v0;
    float v1;
    float v2;
    float v3;
    float v4;
    float v5;
    float v6;
    int tail;
};
}

extern "C" void fn_033a60f8(void* destination, void* source) {
    Block* dst = (Block*)destination;
    Block* src = (Block*)source;
    dst->v6 = src->v6;
    dst->tail = src->tail;
    dst->v0 = src->v0;
    dst->v1 = src->v1;
    dst->v2 = src->v2;
    dst->v3 = src->v3;
    dst->v4 = src->v4;
    dst->v5 = src->v5;
}
