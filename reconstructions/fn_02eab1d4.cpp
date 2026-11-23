namespace {
struct InferredObject {
    unsigned char padding[ 96 ];
    unsigned int value;
};
}

namespace {
inline bool impl(const InferredObject* object, unsigned int value) {
    return object->value == value;
}
}

extern "C" bool fn_02eab1d4(const void* object, unsigned int value) {
    return impl(static_cast<const InferredObject*>(object), value);
}
