namespace {
struct Fn0261e54cView {
    unsigned char reserved_00_31[32];
    const unsigned int* pointer_at_32;
    const unsigned int* pointer_at_36;
    unsigned int reserved_40_47[2];
    unsigned int word_at_48;
};
}


extern "C" unsigned int fn_0261e54c(void* opaque_context) {
    const Fn0261e54cView* view =
        reinterpret_cast<const Fn0261e54cView*>(opaque_context);
    return *view->pointer_at_32 +
           view->word_at_48 * *view->pointer_at_36;
}
