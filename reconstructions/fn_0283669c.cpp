namespace {
struct Pair {
    unsigned char padding_0[0x50];
    const float *source;
    unsigned char padding_54[4];
    float first;
    float second;
};
}

extern "C" void fn_02834c48(void*);
extern "C" void fn_02836670(void*);

extern "C" void fn_0283669c(void *object) {
    Pair *pair = (Pair *)object;
    fn_02834c48(object);
    float value = *pair->source;
    pair->first = value;
    pair->second = value;
    fn_02836670(object);
}
