extern "C" void* fn_03799c68(void* self) {
    void* child = *reinterpret_cast<void**>(static_cast<char*>(self) + 928);
    if (child)
        return *reinterpret_cast<void**>(static_cast<char*>(child) + 140);
    return child;
}
