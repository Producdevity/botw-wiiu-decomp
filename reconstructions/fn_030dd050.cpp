extern "C" void fn_030dcd2c(void* self, unsigned a, unsigned b, unsigned c, unsigned d, unsigned e, unsigned f, unsigned g, unsigned h);

extern "C" void fn_030dd050(void* self, unsigned, unsigned a, unsigned b, unsigned c) {
    fn_030dcd2c(self, a, b, c, *(unsigned*)((char*)self + 296), 66, *(unsigned*)((char*)self + 300), 384, 0);
}
