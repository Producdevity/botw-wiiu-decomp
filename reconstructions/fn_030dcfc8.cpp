extern "C" void fn_030dcd2c(void* self, unsigned a, unsigned b, unsigned c, unsigned d, unsigned e, unsigned f, unsigned g, unsigned h);

extern "C" void fn_030dcfc8(void* self, unsigned, unsigned a, unsigned b, unsigned c) {
    fn_030dcd2c(self, a, b, c, *(unsigned*)((char*)self + 256), 130, *(unsigned*)((char*)self + 260), 768, 0);
}
