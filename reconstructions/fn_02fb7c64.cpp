extern "C" unsigned int fn_02fb7c64(const void* owner) {
    const unsigned char* bytes = static_cast<const unsigned char*>(owner);
    return *reinterpret_cast<const unsigned int*>(bytes + 12);
}
