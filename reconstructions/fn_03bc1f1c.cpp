extern "C" void fn_03bc1f1c(void* self, int v) {
    if (v)
        v = 255;
    *reinterpret_cast<unsigned char*>(static_cast<char*>(self) + 280) = v;
}
