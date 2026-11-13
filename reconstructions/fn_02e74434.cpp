struct FloatPair {
    float x;
    float y;
};

extern "C" FloatPair fn_02e74378(void* context, int index, unsigned group);

extern "C" FloatPair fn_02e74434(void* context, int index, unsigned group) {
    return fn_02e74378(context, index, group);
}
