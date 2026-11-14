namespace {
struct ProductView {
    unsigned char reserved0[24];
    const int* first;
    unsigned char reserved1[52];
    const int* second;
    unsigned char reserved2[16];
    const int* clamped;
};
}

extern "C" int fn_024694e4(void* context) {
    const ProductView* value = static_cast<const ProductView*>(context);
    int count = *value->clamped;
    const unsigned first = static_cast<unsigned>(*value->first);
    if (count < 0)
        count = 0;
    const unsigned product = first * static_cast<unsigned>(count);
    return static_cast<int>(product * static_cast<unsigned>(*value->second));
}
