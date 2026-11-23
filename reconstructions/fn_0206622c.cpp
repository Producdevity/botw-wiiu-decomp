extern "C" void fn_02c19c50(void*, void*);
extern "C" void fn_02c1a178(void*, void*, void*);

extern "C" void fn_0206622c(void **arg0) {
    fn_02c19c50(*arg0, (char *)arg0 + 0x40);
    fn_02c1a178(*arg0, (char *)arg0 + 0x40, 0);
}
