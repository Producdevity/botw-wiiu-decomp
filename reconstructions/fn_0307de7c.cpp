extern "C" unsigned char fn_02f53050();

extern "C" unsigned char fn_0307de7c() {
    return static_cast<unsigned char>(fn_02f53050() ^ 1u);
}
