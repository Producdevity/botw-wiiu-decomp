namespace {
struct InferredInner {
    unsigned char padding_0[65];
    unsigned char value;
};

struct InferredObject {
    unsigned char padding_0[448];
    InferredInner* inner;
};
}

extern "C" unsigned char fn_036108a4(const InferredObject* object) {
    return object->inner->value;
}
