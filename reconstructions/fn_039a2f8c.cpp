struct Opaque_0399f780;

extern "C" unsigned int fn_0399f780(const Opaque_0399f780* object);

inline int difference(unsigned int left, unsigned int right) {
    return left - right;
}

extern "C" int fn_039a2f8c(const Opaque_0399f780* left, const Opaque_0399f780* right) {
    unsigned int right_value = fn_0399f780(right);
    return difference(right_value, fn_0399f780(left));
}
