extern "C" void fn_03a91354(void*, void*);
extern "C" void fn_03a91434(void*, void*);
extern "C" void fn_03a914b8(void*);
extern "C" int fn_03acd794(void);

extern "C" void fn_03a91794(void *object) {
    fn_03a914b8(object);
    fn_03a91354(object, (void *)(fn_03acd794()));
    fn_03a91434(object, 0);
}
